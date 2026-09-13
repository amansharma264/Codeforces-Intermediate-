#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int sum = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++){
        mp[v[i]]++;
    }
    for(auto it : mp){
        if(it.second % 2 == 1){
            sum += it.first;
        }
    }
    cout << sum << endl;
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