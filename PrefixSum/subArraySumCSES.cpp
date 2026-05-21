#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    ll ans = 0;
    ll sum = 0;
    map<ll, ll> mp;
    for(int i = 0; i<n; i++){
        sum += arr[i];
        ans += mp[sum-x];
        if(sum == x) ans++;
        mp[sum]++;
    }
    cout << ans << endl;
}

int main(){
    solve();
}