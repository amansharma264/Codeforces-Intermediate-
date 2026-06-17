#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll median = a[n / 2];   

    ll answer = 0;
    for(int i = 0; i < n; i++){
        answer += abs(a[i] - median);
    }

    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}