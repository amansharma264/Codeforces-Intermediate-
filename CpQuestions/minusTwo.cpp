#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    int oddcnt = 0;
    int evencntmodfour = 0;
    int evencntmodtwo = 0;

    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        if(x % 2 != 0) {
            oddcnt++;
        }
        else if(x % 4 == 0) {
            evencntmodfour++;
        }
        else {
            evencntmodtwo++;
        }
    }

    cout << max({oddcnt, evencntmodfour, evencntmodtwo}) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}