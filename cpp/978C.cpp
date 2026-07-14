#include <bits/stdc++.h>
#include <iostream>

void solve() {
    int n, m; // n: dormitories & m:letters
    std::cin >> n >> m;
    std::vector<long long> rooms(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> rooms[i];
    }

    // fold again
    long long acc = 0;
    for (int i = 0; i < n; i += 1) {
        acc += rooms[i];
        rooms[i] = acc;
    }

    long long b;
    for (int i = 0; i < m; i += 1) {
        std::cin >> b;
        auto it = lower_bound(rooms.begin(), rooms.end(), b);
        if (it - rooms.begin() > 0) {
            b -= *(it - 1);
        };

        std::cout << (it - rooms.begin() + 1) << ' ' << b << '\n';
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
