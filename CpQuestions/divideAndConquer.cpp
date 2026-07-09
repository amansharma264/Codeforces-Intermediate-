#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, y;
    cin >> x >> y;
    if(x % y == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    // solve();
   
}