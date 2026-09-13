#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;


void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if(a[n-1] >= a[n-2] + a[n-3]) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    
    cout << a[0] << " ";
    cout << a[n-2] << " ";
    cout << a[n-1] << " ";

    for(int i = n-3; i >= 1; i--) {
        cout << a[i] << " ";
    }

    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }

    return 0;
}