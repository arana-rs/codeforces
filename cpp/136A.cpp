// #include "../../utils.h"
#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> p(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> p[i];
    }

    std::vector<int> xs(p);
    for (int i = 0; i < n; i += 1) {
        xs[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i += 1) {
        std::cout << xs[i] << ((i + 1 < n) ? " " : "");
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
