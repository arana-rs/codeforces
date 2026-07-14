#include <bits/stdc++.h>
#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    int p, q;

    int acc = 0;
    for (int i = 0; i < n; i += 1) {
        std::cin >> p >> q;
        if (q - p >= 2) {
            acc += 1;
        }
    }
    std::cout << acc << std::endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
