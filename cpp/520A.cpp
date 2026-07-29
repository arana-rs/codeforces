// #include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::vector<int> abc(26);

    for (char &c : s) {
        c = std::tolower(c);
    }

    for (const char &c : s) {
        abc[c - 'a'] += 1;
    }

    bool all =
        std::all_of(abc.begin(), abc.end(), [](const int &e) { return e > 0; });
    std::cout << (all ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
