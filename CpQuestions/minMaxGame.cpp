#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n; i++){
        if(a[i] == 1){
            cnt++;
        }
    }
    if(cnt >= (n + 1) / 2){
        cout << "Bessie" << endl;
    }
    else{
        cout << "Elsie" << endl;
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