#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        if(x % 2 == 1 && y % 2 == 1){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
}

int main(){
    solve();
}