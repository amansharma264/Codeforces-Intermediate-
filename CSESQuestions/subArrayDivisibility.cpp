#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    for(auto & ele: v) cin >> ele;
    vector<ll> freq(n, 0);
    freq[0] = 1;
    ll sum = 0;
    ll ans = 0;
    for(int i = 0; i<n; i++){
        sum += v[i];
        ll rem = ((sum % n) + n) % n;
        ans += freq[rem];
        freq[rem]++;
    }
    cout << ans << "\n";
}

int main(){
    solve();
}