#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;


void solve() {
    ll n;
    cin >> n;

    if (n <= 2) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;

    cout << 1 << " " << n << endl;

    cout << n - 1;
    for (ll i = 1; i <= n - 1; i++) {
        cout << " " << i;
    }
    cout << endl;

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