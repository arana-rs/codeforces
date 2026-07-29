#include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    long long n, l, r;
    std::cin >> n >> l >> r;

    std::vector<int> a(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    // l <= a_i + a_j <= r
    // l - a_j <= a_i <= r - a_j

    long long count = 0;
    for (int j = 0; j < n; j += 1) {
        auto lower = std::lower_bound(a.begin() + j + 1, a.end(), l - a[j]);
        auto upper = std::upper_bound(a.begin() + j + 1, a.end(), r - a[j]);

        count += (upper - lower);
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
