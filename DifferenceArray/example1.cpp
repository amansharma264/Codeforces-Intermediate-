#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it: v) cin >> it;
    int q;
    cin >> q;
    vector<int> diff(n+1,0);
    while(q--){
        int l, r, x;
        cin >> l >> r >> x; // 0 based indexing
        diff[l] += x;
        diff[r+1] -= x;
    }
    // Take prefix sum of diff array
    for(int i = 1; i<=n; i++){
        diff[i] += diff[i-1];
    }
    for(int i = 0; i<n; i++){
        cout << v[i] + diff[i] << " ";
    }
    cout << endl;
}

int main(){
    solve();
}

// Time Complexity = O(n + Q)
// space complexity = O(n)