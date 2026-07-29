// #include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    long long a, b;
    std::cin >> a >> b;
    int res = b - (a % b);
    std::cout << ((res == b) ? 0 : res) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--)
        solve();
}
