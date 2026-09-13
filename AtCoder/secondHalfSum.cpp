#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    int sum = 0;
    for(int i = n/2; i<n; i++){
        sum += v[i];
    }
    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll t;
    // cin >> t;

    // while(t--){
    //     solve();
    // }
    solve();
}