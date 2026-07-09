#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool goodNumber(ll n){
    set<ll> st;
    while(n > 0){
        st.insert(n % 10);
        n /= 10;
    }
    return st.size() <= 2;
}

void solve(){
    ll x;
    cin >> x;
    if(goodNumber(x*10)){
        cout << 10 << endl;
        return;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    // solve();
   
}