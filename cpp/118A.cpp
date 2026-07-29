// #include "../utils.h"
#include <bits/stdc++.h>

bool vecHasChar(const std::vector<char> vec, const char& c) {
    for (const char& e : vec) {
        if (e == c) {
            return true;
        }
    }
    return false;
}

bool isVowel(const char& c) {
    return vecHasChar({'a', 'e', 'i', 'o', 'u', 'y'}, c);
}

void solve() {
    std::string s, b;
    std::cin >> s;
    for (const char& c: s) {
        if (!isVowel(std::tolower(c))) {
            b += '.';
             b += std::tolower(c);
        }
    }
    std::cout << b << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
