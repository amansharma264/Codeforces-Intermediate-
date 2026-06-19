#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i].first;
    }
    for(int i = 0; i<n; i++){
        cin >> a[i].second;
    }
    sort(a, a + n);
    for(int i = 0; i<n; i++){
        cout << a[i].first << " ";
        cout << endl;
    }
    for(int i = 0; i<n; i++){
        cout << a[i].second << " ";
        cout << endl;
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