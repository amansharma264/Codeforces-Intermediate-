#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        for(int i = n+1; i<= 2*n; i++){
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main(){
    solve();
}