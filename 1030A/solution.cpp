#include <bits/stdc++.h>

void solve() {
    int n; // 1 <= n <= 100
    std::cin >> n;
    int p;
    bool is_hard = false;
    for (int i = 0; i < n; i += 1) {
        std::cin >> p;
        if (p) {
           is_hard = true;
           break; 
        }
    }
    std::cout << (is_hard ? "HARD" : "EASY") << std::endl;
    return;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
