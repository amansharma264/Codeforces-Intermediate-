#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(v[0] != 1){
        cout << 1 << endl;
    }
    else{
        ll minCoinSum = 0;
        ll maxCoinSum = 1;
        for(size_t i = 1; i<(int)v.size(); i++){
            ll newMinCoins = minCoinSum + v[i];
            ll newMaxCoins = maxCoinSum + v[i];
            if(newMinCoins - newMaxCoins > 1){
                break;
            }
            maxCoinSum = max(maxCoinSum, newMaxCoins);
        }
        cout << maxCoinSum + 1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
}