#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    long long sum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        sum += x;

        if (sum % k == 0) {
            ans++;
            sum = 0;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}