#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll a,d;
    cin >> a >> d;
    if(a < d || a == d){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
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