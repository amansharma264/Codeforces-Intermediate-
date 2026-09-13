#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    if(a == b){
        cout << 1 << endl;
    }
    else{
        if(b == 1){
            b++;
            cnt++;
        }
        while(a > 0){
            a = a / b;
            cnt++;
        }
        cout << cnt << endl;
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
}