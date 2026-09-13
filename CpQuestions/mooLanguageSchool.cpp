#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0;

    for(int i = 0; i < n; i += k) {
        int sum = 0;

        for(int j = i; j < i + k; j++) {
            sum += s[j] - '0';
        }

        if(sum == k) {
            cnt++;
        }
    }

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}