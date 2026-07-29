#include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    int count = 0;
    char prev = ' ';
    std::string s;
    bool danger = false;
    std::cin >> s;
    for (const char &c : s) {
        if (c == prev) {
            count += 1;
            if (count == 6) {
                danger = true;
            }
        } else {
            count = 0;
        }

        prev = c;
    }

    std::cout << (danger ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
