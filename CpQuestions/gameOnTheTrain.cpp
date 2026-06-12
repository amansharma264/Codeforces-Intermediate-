#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<ll> h(n);

    ll minimumHeight = LLONG_MAX;
    ll maximumHeight = LLONG_MIN;

    for(int i = 0; i < n; i++) {
        cin >> h[i];
        minimumHeight = min(minimumHeight, h[i]);
        maximumHeight = max(maximumHeight, h[i]);
    }

    cout << maximumHeight - minimumHeight + 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}