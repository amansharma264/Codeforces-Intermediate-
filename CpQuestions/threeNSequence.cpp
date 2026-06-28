#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sequence(ll n){
    if(n == 1){
        return 1;
    }
    if(n % 2 != 0){
        return sequence(3*n  + 1) + 1;
    }
    if(n % 2 == 0){
        return sequence(n/2) + 1;
    }
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
    cout << sequence(n);
    return 0;
}