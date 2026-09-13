#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){

        ll score = v[i];
        ll count = 0;

        for(int j = 0; j < n; j++){

            if(i == j){
                continue;
            }

            if(score >= v[j]){
                score += v[j];
                count++;
            }
        }

        cout << count << " ";
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--){
        solve();
    }
}