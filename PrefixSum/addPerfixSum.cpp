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
    vector<int> pre(n);
    pre[0] = v[0];
    for(int i = 1; i<n; i++){
        pre[i] = pre[i-1] + v[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        // int sum = 0;
        // for(int i = l; i<r; i++){
        //     sum += v[i];
        // }
        // cout << sum << " ";
        // int sum = pre[r];
        // if(l > 0){
        //     sum -= pre[l-1];
        // }
        cout << pre[r] - ((l==0)? 0: pre[l-1]) << " ";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

// Time complexity = O(n*q)
// updated time Complexity = O(n + q)
// Space Complexity = O(n)