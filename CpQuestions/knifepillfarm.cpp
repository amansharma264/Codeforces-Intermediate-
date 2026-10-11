#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define sz(x) ((int)(x).size())

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    ll n, m;
    cin >> n >> m;

    vi a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll sum = 0;
    ll ans = LLONG_MIN;
    for(int i = 0; i<m-1 ; i++){
        sum +=  a[i];
    }
    for(int i = m-1; i<n; i++){
            ll score = 1LL* m * a[i] - sum;

            ans = max(ans, score);
        
    }
    cout << ans <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}