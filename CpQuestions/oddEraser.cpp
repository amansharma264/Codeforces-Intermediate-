#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    cout << (__gcd(v[0], v[n-1])) << endl;
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