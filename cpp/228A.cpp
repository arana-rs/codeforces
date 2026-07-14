// #include "../../utils.h"
#include <bits/stdc++.h>

#define HORSESHOES 4

void solve() {
    std::vector<int> s(HORSESHOES);
    for (int i = 0; i < HORSESHOES; i += 1) {
        std::cin >> s[i];
    }

    std::sort(s.begin(), s.end());

    int prev = 0;
    int differents = 0;
    for (int i = 0; i < HORSESHOES; i += 1) {
        if (s[i] == prev) {
            differents += 1;
        }
        prev = s[i];
    }

    std::cout << differents << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
