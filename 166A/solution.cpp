#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<std::pair<int, int>> teams(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> teams[i].first >> teams[i].second;
    }

    auto cmp = [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    };
    std::sort(teams.begin(), teams.end(), cmp);

    auto it_lo = std::lower_bound(teams.begin(), teams.end(), teams[k - 1], cmp);
    auto it_up = std::upper_bound(teams.begin(), teams.end(), teams[k - 1], cmp);

    std::cout << (it_up - it_lo) << '\n';
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
