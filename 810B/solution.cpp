#include <bits/stdc++.h>

int ganancia(int k, int l) {
    if (k >= l) {
        return 0;
    }
    return std::min(k, l - k);
}

void solve() {
    int n, f;
    std::cin >> n >> f;

    std::vector<std::pair<int, int>> days(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> days[i].first >> days[i].second;
    }

    // calcular ganancia para sortearlo a favor de f
    auto cmp = [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        return ganancia(a.first, a.second) > ganancia(b.first, b.second);
    };

    std::sort(days.begin(), days.end(), cmp);

    long long acc = 0;
    for (std::pair<int, int> &day : days) {
        if (f > 0) {
            day.first *= 2;
            f -= 1;
        }
        acc += std::min(day.first, day.second);
    }
    std::cout << acc << '\n';
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
