#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

void solve(){
    int n, p;
    cin >> n >> p;
    vector<int> a(n), b(n);

    for(auto &x : a){
        cin >> x;
    }
    for(auto &x : b){
        cin >> x;
    }
    vector<pair<int, int>> v;
    for(int i = 0; i<n; i++){
        v.push_back({b[i], a[i]});
    }
    sort(v.begin(), v.end());

    for(auto &it : v){
        if(it.first < p){
            it.first = b[i];
            it.second = a[i];
        }
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
}