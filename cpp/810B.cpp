#include "../utils.h"
#include <bits/stdc++.h>

int ganancia(const std::pair<int, int> d) {
    int k = d.first;
    int l = d.second;
    return std::min(k, l - k);
}

void solve() {
    int n, f;
    std::cin >> n >> f;
    std::vector<std::pair<int, int>> d(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> d[i].first >> d[i].second;
    }

    std::sort(d.begin(), d.end(),
              [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
                  return ganancia(a) > ganancia(b);
              });

    int i = 0;
    long long acc = 0;
    for (; i < f; i += 1) {
        acc += std::min(d[i].first * 2, d[i].second);
    }

    for (; i < n; i += 1) {
        acc += std::min(d[i].first, d[i].second);
    }

    std::cout << acc << '\n';
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
