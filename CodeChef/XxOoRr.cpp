#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i = 30; i>=0; i--){
        ll temp = 0;
        for(int j = 0; j<n; j++){
            if((a[j] & (1 << i)) > 0){
                temp++;
            }
        }
        ans += (temp + k - 1)/k;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}