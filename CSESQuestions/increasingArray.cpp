#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll ans = 0;
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    for(int i = 1; i<n; i++){
            if(v[i] < v[i-1]){
                ans += v[i-1] - v[i];
                v[i] = v[i-1];
            }
        }
        cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}