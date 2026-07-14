#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> prices(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> prices[i];
    }
    std::sort(prices.begin(), prices.end());

    
    int q;
    std::cin >> q;
    
    for (int i = 0; i < q; i += 1) {
        int m;
        std::cin >> m;
        auto it = std::upper_bound(prices.begin(), prices.end(), m);
        std::cout << it - prices.begin() << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
