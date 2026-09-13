#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++){
        mp[v[i]]++;
    }
    int maxNumber = 0;
    for(auto it : mp){
        maxNumber = max(maxNumber, it.second);
    }
    int ans = 0;
    for(auto it : mp){
        if(it.second >= maxNumber - 1){
            ans++;
        }
    }
    cout << ans << endl;
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