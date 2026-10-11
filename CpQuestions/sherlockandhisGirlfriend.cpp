#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

bool prime[100005];

void solve() {
    int n;
    cin >> n;

    for (int i = 2; i <= n + 1; i++) {
        prime[i] = true;
    }

    for (int i = 2; i * i <= n + 1; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n + 1; j += i) {
                prime[j] = false;
            }
        }
    }

    if (n <= 2) {
        cout << 1 << '\n';

        for (int i = 2; i <= n + 1; i++) {
            cout << 1 << " ";
        }
        cout << '\n';
    }
    else {
        cout << 2 << '\n';

        for (int i = 2; i <= n + 1; i++) {
            if (prime[i])
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }

        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // ll t;
    // cin >> t;

    // while(t--) {
    //     solve();
    // }

    return 0;
}