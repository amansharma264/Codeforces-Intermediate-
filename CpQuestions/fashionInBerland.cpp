#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n == 1){
        ll sum;
        cin >> sum;
        if(sum == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        return;
    }

    ll count = 0;
    for(int i = 0; i<n; i++){
        ll x;
        cin >> x;
        count += x;
    }
    if(n == 1){
        cout << (count == 1 ? "YES" : "NO");
    }
    else{
        cout << (count == n-1 ? "YES" : "NO");
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