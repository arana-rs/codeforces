#include "../utils.h"
#include <bits/stdc++.h>

struct Letra {
    char c;
    int origen; // 0 = viene de guest+host, 1 = viene de la pila
};

std::ostream &operator<<(std::ostream &os, const std::vector<Letra> &v) {
    os << '[';
    for (size_t i = 0; i < v.size(); ++i) {
        os << "{" << v[i].c << "," << v[i].origen << "}"
           << (i + 1 < v.size() ? ", " : "");
    }
    return os << ']';
}

void solve() {

    std::string original, temp;
    std::cin >> original >> temp;
    original += temp;
    std::cout << original << '\n';

    std::vector<Letra> letras;
    char c;
    while (std::cin >> c) {
        Letra l;
        l.c = c;
        l.origen = 1;
        letras.push_back(l);
    }

    std::cout << letras << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
