#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6+1;
int diff[N];

void solve(){
    int n;
    cin >> n;
    int c;
    cin >> c;
    vector<int> start(n), end(n), cost(n);
    for(int i = 0; i<n; i++){
        cin >> start[i] >> end[i] >> cost[i];
    }
    set<int>st;
    for(int i = 0; i<n; i++){
        st.insert(start[i]);
        st.insert(end[i]+1);
    }
    int idx = 0;
    map<int, int> mp;
    for(auto it: st){
        mp[it] = idx++;
    }
    vector<ll> diff(idx + 1, 0);
    for(int i = 0; i<n; i++){
        int idx1 = mp[start[i]];
        int idx2 = mp[end[i] + 1];
        diff[idx1] += cost[i];
        diff[idx2] -= cost[i];
    }
    for(int i = 1; i<= idx; i++){
        diff[i] += diff[i-1];
    }
    vector<int> a(st.begin(), st.end());
    // a--> [2,4,6,9]
    // vector<int> a;
    // for(auto it:st){
    //     a.push_back(it);
    // }
    ll ans = 0;
    for(int i = 1; i<a.size(); i++){
        ll span = a[i] - a[i-1];
        ans += min(diff[i-1], (ll)c) * span;
    }
    cout << ans << endl;
}

int main(){
    solve();
}

// Time Complexity = O(nlogn)