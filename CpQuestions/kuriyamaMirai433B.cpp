#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &ele : v) cin >> ele;

    vector<int> s = v;
    sort(s.begin(), s.end());

    vector<ll> prefix1(n + 1, 0), prefix2(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefix1[i] = prefix1[i - 1] + v[i - 1];
        prefix2[i] = prefix2[i - 1] + s[i - 1];
    }

    int q;
    cin >> q;

    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << prefix1[r] - prefix1[l - 1] << "\n";
        } else {
            cout << prefix2[r] - prefix2[l - 1] << "\n";
        }
    }
}

int main() {
    solve();
}