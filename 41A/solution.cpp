#include <bits/stdc++.h>
#include <cstring>

#define LENGTH 101

void solve() {
    char s[LENGTH], t[LENGTH];
    std::cin >> s >> t;
    int n = std::strlen(s);
    int m = std::strlen(t);

    // no se asegura que las dos palabras sean del mismo size
    bool equal = (n == m);
    for (int i = 0; equal && i < n; i += 1) {
        if (s[i] != t[n - i - 1]) {
            equal = false;
        }
    }

    std::cout << (equal ? "YES" : "NO") << std::endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
