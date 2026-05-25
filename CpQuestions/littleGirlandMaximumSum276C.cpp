#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for(auto & ele: v) cin >> ele;
    sort(v.begin(), v.end());
    vector<ll> diff(n+2, 0);
    while(q--){
        ll l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }
    for(ll i = 1; i<=n; i++){
        diff[i] += diff[i-1];
    }
    vector<ll> freq;
    for(ll i = 1; i<=n; i++){
        freq.push_back(diff[i]);
    }
    sort(freq.begin(), freq.end());
    ll ans = 0;
    for(int i = 0; i<n; i++){
        ans += v[i]* freq[i];
    }
    cout << ans << endl;
}

int main(){
    solve();
}