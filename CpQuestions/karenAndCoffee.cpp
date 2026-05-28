#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> diff(200005, 0);
    for(int i = 0; i<n; i++){
        ll l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r+1] -= 1;
    }
    for(int i = 1; i<=200000; i++){
        diff[i] += diff[i-1];
    }
    vector<ll>pre(200005, 0);
    for(int i = 1; i<=200000; i++){
        pre[i] = pre[i-1] + (diff[i] >= k);
    }
    while(q--){
        ll a, b;
        cin >> a >> b;
        cout << pre[b] - pre[a-1] << "\n";
    }
}

int main(){
    solve();
}