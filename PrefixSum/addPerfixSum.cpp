#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    // for(int i = 0; i<n; i++){
    //     cin >> v[i];
    // }
    for(auto &it:v) cin >> it; // taking the inputs
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        int sum = 0;
        for(int i = l; i<r; i++){
            sum += v[i];
        }
        cout << sum << " ";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
