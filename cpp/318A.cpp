#include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    int n, k;
    std::cin >> n >> k;
    int i = 1, some = 0;
    for (int j = 1; j <= n; j += 2, i += 1) {
        dbg(i);
        dbg(j);
        std::cout << '\n';
        if (i == k) {
            break;
            some = j;
        }
    }

    for (int j = 2; j <= n; j += 2, i += 1) {
        
        dbg(i);
        dbg(j);
        std::cout << '\n';
        if (i == k) {
            if (j == 0)
                some = j;
            break;
        }
    }
    std::cout << some << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
