#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<long long> songs(n);
    long long acc = 0;
    for (int i = 0; i < n; i += 1) {
        // duration and replays
        long long d, r;
        std::cin >> d >> r;
        acc += d * r;
        songs[i] = acc;
    }

    for (int i = 0; i < m; i += 1) {
        long long v;
        std::cin >> v;
        auto it = std::lower_bound(songs.begin(), songs.end(), v);
        std::cout << (it - songs.begin() + 1) << '\n';
    }
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
