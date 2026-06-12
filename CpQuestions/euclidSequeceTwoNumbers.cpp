#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend());

    if (n == 2) {
        cout << b[0] << " " << b[1] << '\n';
        return;
    }

    bool ok = true;

    for (int i = 2; i < n; i++) {
        if (b[i - 2] % b[i - 1] != b[i]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << b[0] << " " << b[1] << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}