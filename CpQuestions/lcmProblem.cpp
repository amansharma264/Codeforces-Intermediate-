#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;


void solve() {
    ll l, r;
    cin >> l >> r;

    if(2* l > r){
        cout << -1 << " " << -1 <<endl;
    }
    else{
        cout << l <<  " " << 2*l << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solve();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}