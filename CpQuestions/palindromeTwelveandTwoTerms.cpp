#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPalindrome(ll x) {
    if (x < 0) return false;

    ll original = x;
    ll reversed = 0;

    while (x > 0) {
        ll digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return original == reversed;
}

void solve() {
    ll n;
    cin >> n;

    for (ll a = 0; a <= min(n, 1000LL); a++) {
        if (isPalindrome(a) && (n - a) % 12 == 0) {
            cout << a << " " << n - a << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}