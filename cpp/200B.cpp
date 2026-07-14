#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <vector>

double volumen_orange(const std::vector<int> &v) {
    double suma = 0.0;
    for (int num : v) {
        suma += num;
    }

    return suma / v.size();
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v = {};
    int d;
    for (int i = 0; i < n; i += 1) {
        std::cin >> d;
        v.push_back(d);
    }

    std::cout << std::fixed << std::setprecision(12) << volumen_orange(v)
              << '\n';
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
