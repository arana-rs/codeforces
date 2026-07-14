# compila <problem>
build problem:
    @mkdir -p bin
    @if [ "cpp/{{ problem }}.cpp" -nt "bin/{{ problem }}" ]; then \
        g++ -std=c++20 -I. -o bin/{{ problem }} cpp/{{ problem }}.cpp -Wall -O2; \
    fi

# just run <problem> → compila y corre con el input
run problem: (build problem)
    ./bin/{{ problem }} < inputs/{{ problem }}.in

# just check <problem> → compara output con el .out esperado
check problem: (build problem)
    ./bin/{{ problem }} < inputs/{{ problem }}.in | diff - inputs/{{ problem }}.out && echo "✓ AC" || echo "✗ WA"

# just test-all → corre check en todos los problemas
test-all:
    @for f in cpp/solutions/*.cpp; do \
        name=$(basename "$f" .cpp); \
        printf "%-8s " "$name"; \
        just check "$name"; \
    done

# just new <problem> → crea archivos vacíos para un nuevo problema
new problem:
    mkdir -p cpp/solutions inputs
    touch inputs/{{ problem }}.in inputs/{{ problem }}.out
    [ -f cpp/{{ problem }}.cpp ] || cp template.cpp cpp/{{ problem }}.cpp
