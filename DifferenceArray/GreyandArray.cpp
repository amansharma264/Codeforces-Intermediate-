/*
 * ============================================================
 *   COMPETITIVE PROGRAMMING TEMPLATE - C++
 *   Codeforces / AtCoder / LeetCode contests ke liye
 * ============================================================
 */

// ─── HEADERS ────────────────────────────────────────────────
#include <bits/stdc++.h>
using namespace std;

// ─── TYPE ALIASES ───────────────────────────────────────────
typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>          vl;
typedef vector<pii>         vpii;

// ─── MACROS ─────────────────────────────────────────────────
#define pb          push_back
#define ppb         pop_back
#define mp          make_pair
#define fi          first
#define se          second
#define all(x)      (x).begin(),(x).end()
#define rall(x)     (x).rbegin(),(x).rend()
#define sz(x)       (int)(x).size()
#define endl        "\n"
#define yes         cout << "YES\n"
#define no          cout << "NO\n"

#define FOR(i,a,b)  for(int i=(a); i<(b); i++)
#define ROF(i,a,b)  for(int i=(b)-1; i>=(a); i--)
#define REP(i,n)    FOR(i,0,n)

// ─── CONSTANTS ───────────────────────────────────────────────
const int    MOD  = 1e9 + 7;
const int    INF  = 1e9;
const ll     LINF = 1e18;
const double PI   = acos(-1.0);

// ─── FAST I/O ────────────────────────────────────────────────
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// ─── DEBUG HELPER ────────────────────────────────────────────
#ifndef ONLINE_JUDGE
    #define dbg(x) cerr << #x << " = " << x << "\n"
    #define dbgv(v) cerr << #v << " = "; for(auto& _x:(v)) cerr<<_x<<" "; cerr<<"\n"
#else
    #define dbg(x)
    #define dbgv(v)
#endif

// ─── USEFUL FUNCTIONS ────────────────────────────────────────
ll power(ll base, ll exp, ll mod = MOD) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// ─── SOLVE FUNCTION ──────────────────────────────────────────
void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<ll> l(m+1), r(m+1), d(m+1);
    for(int i = 1; i <= m; i++) cin >> l[i] >> r[i] >> d[i];

    vector<ll> diff(m+2, 0);
    while(k--){
        int ql, qr;
        cin >> ql >> qr;
        diff[ql] += 1;
        diff[qr+1] -= 1;
    }

    vector<ll> cnt(m+2, 0);
    for(int i = 1; i <= m; i++) cnt[i] = cnt[i-1] + diff[i];

    vector<ll> adiff(n+2, 0);
    for(int i = 1; i <= m; i++){
        if(cnt[i] == 0) continue;
        adiff[l[i]] += cnt[i] * d[i];
        adiff[r[i]+1] -= cnt[i] * d[i];
    }

    ll running = 0;
    for(int i = 1; i <= n; i++){
        running += adiff[i];
        cout << a[i] + running;
        if(i < n) cout << " ";
    }
    cout << "\n";
}

// ─── MAIN ────────────────────────────────────────────────────
int main() {
    fastio();

    int t = 1;
    // cin >> t;   

    while (t--) {
        solve();
    }

    return 0;
}

// Time Complexity  = O(N + M + K)
// Space Complexity = O(N + M)