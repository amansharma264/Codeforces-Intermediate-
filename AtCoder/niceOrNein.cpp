#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;

    if (a + b == 9 ||
        a - b == 9 ||
        a * b == 9 ||
        a == 9 * b) {
        cout << "Nine" << endl;
    }
    else {
        cout << "Nein" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}