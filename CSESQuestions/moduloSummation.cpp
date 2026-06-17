#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll sum = 0;
    for(int i = 0; i<n ;i++){
        sum += a[i];
    }
    cout << (sum - n) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}