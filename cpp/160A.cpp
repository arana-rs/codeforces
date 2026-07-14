#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end(),
              [](const auto &a, const auto &b) { return a > b; });

    // fold
    int acc = 0;
    for (int i = 0; i < n; i += 1) {
        acc += a[i];
        a[i] = acc; 
    }

    auto it = std::upper_bound(a.begin(), a.end(), a.back() / 2);
    std::cout << (it - a.begin() + 1) << '\n';
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
