#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;


void solve() {
    ll n, x;
    cin >> n >> x;
    if(n <= 2){
        cout << 1 << endl;
    }
    else{
        cout << (n - 3)/x + 2 << endl;
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