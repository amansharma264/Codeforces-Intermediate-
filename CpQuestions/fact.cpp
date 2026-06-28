#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(ll n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*fact(n-1);
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while(t--){
    //     solve();
    // }
    ll n;
    cin >> n;
    cout << fact(n);
    return 0;
}