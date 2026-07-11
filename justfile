build problem:
    @mkdir -p bin
    @if [ "{{ problem }}/solution.cpp" -nt "bin/{{ problem }}" ]; then \
        g++ -std=c++20 -o bin/{{ problem }} {{ problem }}/solution.cpp -Wall -O2; \
    fi

# just <problem> → compila y corre con in.txt
run problem: (build problem)
    ./bin/{{ problem }} < {{ problem }}/in.txt

# just check <problem> → compara output con out.txt
check problem: (build problem)
    ./bin/{{ problem }} < {{ problem }}/in.txt | diff - {{ problem }}/out.txt && echo "✓ AC" || echo "✗ WA"

# just test-all → corre check en todos los problemas
test-all:
    @for d in */; do \
        name=$(basename "$d"); \
        if [ -f "$d/solution.cpp" ]; then \
            printf "%-8s " "$name"; \
            just check "$name"; \
        fi; \
    done

# just new <problem> → crea carpeta con archivos vacíos
new problem:
    mkdir -p {{ problem }}
    touch {{ problem }}/in.txt {{ problem }}/out.txt
    [ -f {{ problem }}/solution.cpp ] || cp template.cpp {{ problem }}/solution.cpp
