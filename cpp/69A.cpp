#include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    int vecX = 0,vecY =0 ,vecZ = 0;
    int x, y , z;
    
    for (int i = 0; i < n; i += 1) {
        std::cin >> x >> y >> z;
        vecX += x;
        vecY += y;
        vecZ += z;
    }
    std::cout << ((!vecX && !vecY && !vecZ) ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
