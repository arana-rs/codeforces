#include <bits/stdc++.h>
#include <iostream>

void solve() {
    int n, h;
    std::cin >> n >> h;
    int p;
    int road_width =0 ;
    for (int i = 0; i < n; i += 1) {
        std::cin >> p;
        road_width += (p > h) ? 2 : 1;
    }
    std::cout << road_width << std::endl;
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
