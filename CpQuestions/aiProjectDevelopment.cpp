#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, x, y, z;
    cin >> n >> x >> y >> z;
    ll withoutAi = (n + (x + y) - 1) / (x + y);
    ll helpofAi;
    if(x * z >= n){
        helpofAi = ( n + x - 1) / x;
    }
    else{
        ll rem = n - x * z;
        helpofAi = z + (rem + (x + 10*y) - 1) / (x + 10*y);
    }
    cout << min(withoutAi, helpofAi) << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}