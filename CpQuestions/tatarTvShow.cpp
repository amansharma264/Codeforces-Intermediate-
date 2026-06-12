#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> countingOne(k, 0);
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            countingOne[i % k]++;
        }
    }
    for(int i = 0; i<k; i++){
        if(countingOne[i] % 2 == 1){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}