#include <bits/stdc++.h>
using namespace std;


// ============================================================
// TYPE ALIASES
// ============================================================

using ll = long long;
using ld = long double;

using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<vector<int>>;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using um = unordered_map<int, int>;

// ============================================================
// MACROS
// ============================================================

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define pb push_back
#define eb emplace_back

#define sz(x) ((int)(x).size())

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define endl '\n'


// ============================================================
// CONSTANTS
// ============================================================

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


// ============================================================
// SIEVE OF ERATOSTHENES
// ============================================================

// const int N = 1e7 + 1;
const int N = 2000005;

// prime[i] = true  -> i is prime
// prime[i] = false -> i is not prime

vector<bool> prime(N, true);

void sieve() {

    prime[0] = prime[1] = false;

    for(int i = 2; i * i < N; i++) {

        if(prime[i]) {

            for(int j = i * i; j < N; j += i) {
                prime[j] = false;
            }
        }
    }
}


// ============================================================
// GCD
// ============================================================

ll gcd(ll a, ll b) {

    return b ? gcd(b, a % b) : a;
}


// ============================================================
// LCM
// ============================================================

ll lcm(ll a, ll b) {

    return (a / gcd(a, b)) * b;
}


// ============================================================
// BINARY EXPONENTIATION
// (a^b) % mod
// ============================================================

ll binpow(ll a, ll b, ll mod = MOD) {

    ll res = 1;

    a %= mod;

    while (b > 0) {

        if (b & 1)
            res = res * a % mod;

        a = a * a % mod;

        b >>= 1;
    }

    return res;
}


// ============================================================
// PRIME CHECK - O(sqrt(n))
// ============================================================

bool isPrime(ll n) {

    if (n < 2)
        return false;

    for (ll i = 2; i <= n / i; i++) {

        if (n % i == 0)
            return false;
    }

    return true;
}


// ============================================================
// PRIME FACTORIZATION - O(sqrt(n))
// Example: 60 -> 2 2 3 5
// ============================================================

vll primeFactorization(ll n) {

    vll factors;

    for (ll i = 2; i <= n / i; i++) {

        if (n % i == 0) {

            while (n % i == 0) {

                n /= i;
                factors.pb(i);
            }
        }
    }

    if (n > 1)
        factors.pb(n);

    return factors;
}


// ============================================================
// ALL DIVISORS - O(sqrt(n))
// Example: 36 -> 1 2 3 4 6 9 12 18 36
// ============================================================

vll divisors(ll n) {

    vll fact;

    for (ll i = 1; i <= n / i; i++) {

        if (n % i == 0) {

            fact.pb(i);

            if (i != n / i)
                fact.pb(n / i);
        }
    }

    return fact;
}

ll nextNumber(ll x) {
    ll sum = 0;

    while(x > 0) {
        ll digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }

    return sum;
}


// ============================================================
// VECTOR - MAXIMUM
// ============================================================

template <typename T>
T maxElement(const vector<T>& v) {

    return *max_element(all(v));
}


// ============================================================
// VECTOR - MINIMUM
// ============================================================

template <typename T>
T minElement(const vector<T>& v) {

    return *min_element(all(v));
}


// ============================================================
// VECTOR - SUM
// ============================================================

template <typename T>
T sumVector(const vector<T>& v) {

    return accumulate(all(v), T(0));
}

// ============================================================
// FENWICK TREE
// ============================================================

struct Fenwick {

    int n;
    vector<int> bit;

    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void update(int idx, int val) {

        while (idx <= n) {

            bit[idx] += val;
            idx += idx & -idx;
        }
    }

    int query(int idx) {

        int sum = 0;

        while (idx > 0) {

            sum += bit[idx];
            idx -= idx & -idx;
        }

        return sum;
    }

    int kth(int k) {

        int idx = 0;

        int mask = 1;

        while ((mask << 1) <= n)
            mask <<= 1;

        for (int d = mask; d > 0; d >>= 1) {

            int next = idx + d;

            if (next <= n && bit[next] < k) {

                idx = next;
                k -= bit[next];
            }
        }

        return idx + 1;
    }
};



// ============================================================
// DEBUGGING
// ============================================================

#ifndef ONLINE_JUDGE

void _print(ll x) {
    cerr << x;
}

void _print(int x) {
    cerr << x;
}

void _print(ld x) {
    cerr << x;
}

void _print(double x) {
    cerr << x;
}

void _print(char x) {
    cerr << x;
}

void _print(string x) {
    cerr << x;
}

void _print(bool x) {
    cerr << (x ? "true" : "false");
}


template <typename T>
void _print(vector<T> v) {

    cerr << "[ ";

    for (auto x : v) {

        _print(x);
        cerr << " ";
    }

    cerr << "]";
}


template <typename T, typename V>
void _print(pair<T, V> p) {

    cerr << "{";

    _print(p.first);

    cerr << ", ";

    _print(p.second);

    cerr << "}";
}


#define debug(x) cerr << #x << " = ", _print(x), cerr << endl

#else

#define debug(x)

#endif


// ============================================================
// SOLVE
// ============================================================

// int digitsSum(int n){
//     int sum = 0;
//     while(n > 0){
//         int lastdigits = n % 10;
//         sum += lastdigits;
//         n /= 10;
//     }
//     return sum;
// }

void solve() {
    ll n;
    cin >> n;
    
    vll a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i = n - 1; i>=0; i--){
        ans = 2 * a[i] - ans;
    }
    cout <<  ans/2 << endl;

}

// ============================================================
// MAIN
// ============================================================

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // Sieve runs only once
    // sieve();
    // solve();

    int t;
    cin >> t;

    while (t--) {

        solve();
    }

    return 0;
}