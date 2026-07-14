#include <bits/stdc++.h>
#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    char prev0, prev1;
    std::cin >> prev0 >> prev1;

    int groups = 1;

    for (int i = 1; i < n; i += 1) {
        char c0, c1;
        std::cin >> c0 >> c1;
        if (prev1 == c0) {
            groups += 1;
        }
        prev1 = c1;
    }
    std::cout << groups << std::endl;
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
