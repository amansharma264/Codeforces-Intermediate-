#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    vector<ll> va, vb;

    while (true) {
        va.push_back(a);
        if (a == 0) break;
        a /= x;
    }

    while (true) {
        vb.push_back(b);
        if (b == 0) break;
        b /= x;
    }

    ll ans = LLONG_MAX;

    for (int i = 0; i < (int)va.size(); i++) {
        for (int j = 0; j < (int)vb.size(); j++) {
            ll cost = i + j + llabs(va[i] - vb[j]);
            ans = min(ans, cost);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}