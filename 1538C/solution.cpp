#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

void solve() {
    int n, l, r;
    std::cin >> n >> l >> r;

    std::vector<int> a(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    // haciendo a[i] fijo en vez de variable
    // l - a[i] <= a[j] <= r - a[i]
    long long count = 0;
    for (int i = 0; i < n; i += 1) {
        int left = l - a[i];
        int right = r - a[i];

        // + 1 para no encontrar el mismo elemento al buscar
        auto floor = std::lower_bound(a.begin() + i + 1, a.end(), left);
        auto roof = std::upper_bound(a.begin() + i + 1, a.end(), right);

        count += (roof - floor);
    }

    std::cout << count << '\n';
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
