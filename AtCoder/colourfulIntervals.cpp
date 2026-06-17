#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        int k = 1;

        for (int i = 0; i < m; i++) {
            int l, r;
            cin >> l >> r;
            k = max(k, r - l + 1);
        }

        for (int i = 0; i < n; i++) {
            cout << (i % k);
            if (i + 1 < n) cout << ' ';
        }
        cout << '\n';
    }
}