#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int &temp = a;
    a = b;
    b = temp;
}

void solve() {
    int n, t; // 1 <= n, t <= 50
    cin >> n >> t;
    char p[50] = {};
    for (int i = 0; i < n; i += 1) {
        cin >> p[i];
    }

    for (int i = 0; i < t; i += 1) {
        for (int j = 0; j < n - 1; j += 1) {
            if (p[j] == 'B' && p[j + 1] == 'G') {
                swap(p[j], p[j + 1]);
                j += 1;
            }
        }
    }

    // print array
    for (int i = 0; i < n; i += 1) {
        cout << p[i];
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
    // TODO me parece que hay un test en el caso BBGBG donde con t=1 seria GBBGB
}
