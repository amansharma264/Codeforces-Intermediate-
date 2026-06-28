#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll x;
    cin >> x;
    for(int i = 0; i<n; i++){
        if(a[i] == x){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while(t--){
    //     solve();
    // }
    solve();
   
}