#include "../utils.h"
#include <bits/stdc++.h>

bool is_lucky(int n) {
    bool flag = true;
    while (n != 0) {
        if (n % 10 != 7 && n % 10 != 4) {
            flag = false;
            break;
        }
        n /= 10;
    }

    return flag;
}

void solve() {
    int n;
    std::cin >> n;
    std::cout << ((is_lucky(n) || n % 4 == 0 || n % 7 == 0)  ? "YES" : "NO")
              << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
