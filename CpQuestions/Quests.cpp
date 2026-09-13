#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
     ll n, k;
     cin >> n >> k;
     vector<ll> a(n), b(n);
     for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i= 0; i<n; i++){
        cin >> b[i]; 
    }
    ll sum = 0;
    ll ans = 0;
    ll maxi = 0;
    for(int i = 0; i<min(n,k); i++){
        sum += a[i];
        maxi = max(maxi, b[i]);
        ans = max(ans, sum + (k - (i + 1)) * maxi);
    }
    cout << ans << endl;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    // solve();
    
}
