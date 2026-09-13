#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

void solve(){
    ll n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll coins1 = 0;
    ll coins10 = 0;
    ll coins100 = 0;

    for(int i = 0; i < n; i++){

        ll notes = (a[i] + 999) / 1000;

        ll change = notes * 1000 - a[i];

        coins100 += change / 100;
        change %= 100;

        coins10 += change / 10;
        change %= 10;

        coins1 += change;
    }

    cout << coins1 << " " << coins10 << " " << coins100 << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}