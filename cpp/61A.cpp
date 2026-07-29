// #include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    for (size_t i = 0; i < s1.size(); i += 1) {
        int op = (s1[i] - '0') ^ (s2[i] - '0');
        s1[i] = op + '0';
    }

    std::cout << s1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
