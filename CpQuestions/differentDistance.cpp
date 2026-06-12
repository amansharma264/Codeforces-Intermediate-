#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    for(int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    for(int i = 2; i <= n; i++) {
        v.push_back(i);
    }
    v.push_back(1);

    for(int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    for(int i = 0; i < 4 * n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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