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
    ll n;
    cin >> n;
    vi p(n + 1);
    for(int i = 1; i<=n; i++){
        cin >> p[i];
    }
    ll i = 1;
    ll j = n;

    while(i < j){
        if(p[i] == i){
            i++;
            continue;
        }
        if(p[j] == j){
            j--;
            continue;
        }
        if(p[i] != j || p[j] != i){
            cout << "NO" << endl;
            return;
        }
        i++;
        j--;
    } 
    cout << "YES" << endl;
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