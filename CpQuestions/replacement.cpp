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
    for(int i = 0; i<n; i++){
        if(a[i] > 0){
            a[i] = 1;
        }
        else if(a[i] < 0){
            a[i] = 2;
        }
    }
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
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
    solve();
   
}