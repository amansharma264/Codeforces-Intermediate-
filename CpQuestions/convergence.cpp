#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = n;

    for (int i = 0; i < n; ) {
        int j = i;

        while (j < n && a[j] == a[i]) {
            j++;
        }

        ll left = i;
        ll right = n - j;

        ans = min(ans, max(left, right));

        i = j;
    }

    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }
}