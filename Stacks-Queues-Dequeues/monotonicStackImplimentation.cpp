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
    vector<int> ans(n);
    stack<int> s;
    for(int i = 0; i<n; i++){
        // removing all the useless elements
        while(!s.empty() && s.top() >= v[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
        s.push(v[i]);
    }
    for(int i = 0; i<n; i++){
        cout << ans[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    // solve();
    
}

// TC = O(N)