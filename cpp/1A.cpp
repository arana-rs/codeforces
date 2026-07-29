#include "../utils.h"
#include <bits/stdc++.h>

void solve() {
    long long n, m, a;
    std::cin >> n >> m >> a;

    long long temp = n / a + ((n % a == 0) ? 0 : 1);
    temp *= m / a + ((m % a == 0) ? 0 : 1);
    
    std::cout << temp << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); // int t; std::cin >> t; while (t--)
    solve();
}
