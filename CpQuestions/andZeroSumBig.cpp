#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll helper(ll n, ll k){
    if(k == 0) return 1;
    ll ans = helper(n, k-1);
    ans %= mod;
    ans*=n;
    ans%=mod;
    return ans;

}

void solve(){
    ll n, k;
    cin >> n >> k;
    cout << helper(n,k) << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
