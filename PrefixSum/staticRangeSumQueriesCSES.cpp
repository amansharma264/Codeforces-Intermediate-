#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for(auto & it:v) cin >> it;
    vector<ll>pre(n);
    pre[0] = v[0];
    for(int i = 1; i<n; i++){
        pre[i] = pre[i-1] + v[i];
    }
    while(q--){
        int a, b;
        cin >> a >> b;
        a--, b--;
        cout << pre[b] - ((a == 0)? 0: pre[a-1]) << " ";

    }
}

int main(){
    solve();
}