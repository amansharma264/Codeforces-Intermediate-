#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &ele:v) cin >> ele;
    for(int i = 1; i<= 61; i++){
        ll num = (1LL << i);
        set<ll>st;
        for(int i = 0; i<n; i++){
            st.insert(v[i] % num);
        }
        if(st.size() == 2){
            cout << num << "\n";
            return;
        }
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}