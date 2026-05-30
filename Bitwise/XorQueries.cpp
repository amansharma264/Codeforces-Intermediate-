#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    vector<ll> pre(n);
    pre[0] = v[0];
    for(int i = 0; i<n; i++){
        pre[i] = (pre[i-1] ^ v[i]);
    }
    ll q;
    cin >> q;
    while(q--){
        ll l, r;
        cin >> l >> r;
        l--, r--; // changing to 0 based index
        cout << (pre[r] ^ (l==0 ? 0 : pre[l-1])) << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}

// Time Complexity = O(n + q)