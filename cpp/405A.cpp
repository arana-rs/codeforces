#include "../utils.h"
#include <bits/stdc++.h>

struct Columna {
    int altura;
    int indice;
};

void solve() {
    int n;
    std::cin >> n;
    std::vector<Columna> a(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i].altura;
        a[i].indice = i;
    }

    auto cmp = [](const Columna& a, const Columna& b) {
        return a.altura < b.altura;
    };

    std::sort(a.begin(), a.end(), cmp);

    for( int i  =0; i < n; i +=1) {
        std::cout  << a[i].altura << ((i + 1 < n) ? " " : "");
    }

    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
