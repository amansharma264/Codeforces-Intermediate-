#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> b(n);
    for(int i = 0; i<n; i++){
        cin >> b[i];
    }
    for(int i = 0; i<n; i++){
        if(b[a[i] - 1] != i + 1){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--) solve();
    solve();

    return 0;
}