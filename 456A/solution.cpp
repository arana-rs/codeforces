#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> laptops(n);

    for (int i = 0; i < n; i += 1) {
        std::cin >> laptops[i].first >> laptops[i].second;
    }

    std::sort(laptops.begin(), laptops.end());

    int previus_quality = 0;
    int alex_is_correct = false;
    for (std::pair<int, int> e : laptops) {
        if (e.second < previus_quality) {
            alex_is_correct = true;
            break;
        }
        previus_quality = e.second;
    }

    std::cout << (alex_is_correct ? "Happy Alex" : "Poor Alex") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // std::cin >> t;
    while (t--)
        solve();
}
