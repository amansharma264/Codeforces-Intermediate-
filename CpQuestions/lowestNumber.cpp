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
    ll mini = INT32_MAX;
    ll index = -1;
    for(int i = 0; i<n; i++){
        if(a[i] < mini){
            mini = a[i];
            index = i + 1;
        }
}
cout << mini << " " << index << endl;

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