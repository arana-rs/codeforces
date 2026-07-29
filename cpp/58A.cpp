#include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    std::string str;
    std::cin >> str;

    char hello[] = "hello";
    int i = 0;
    for (const char& c : str) {
        if (i < 5 && c == hello[i]) {
            i += 1;
        }
    }

    std::cout << (i == 5 ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
