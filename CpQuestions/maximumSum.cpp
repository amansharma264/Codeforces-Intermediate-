#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll sum1 = 0;
    ll sum2 = 0;

    sort(a.begin(), a.end());

    if(k == 1){
        for(int i = 2; i < n; i++){
            sum1 += a[i];
        }

        for(int i = 0; i < n-1; i++){
            sum2 += a[i];
        }

        cout << max(sum1, sum2) << endl;
    }

    if(k == 2){
        ll sum1 = 0;
        ll sum2 = 0;
        ll sum3 = 0;

        for(int i = 0; i < n-2; i++){
            sum1 += a[i];
        }

        for(int i = 2; i < n-1; i++){
            sum2 += a[i];
        }

        for(int i = 4; i < n; i++){
            sum3 += a[i];
        }

        cout << max({sum1, sum2, sum3}) << endl;
    }

    if(k > 2){
        ll ans = 0;

        for(int j = 0; j <= k; j++){

            ll sum = 0;

            int left = 2 * j;
            int right = n - (k - j);

            if(left < right){
                for(int i = left; i < right; i++){
                    sum += a[i];
                }
            }

            ans = max(ans, sum);
        }

        cout << ans << endl;
    }
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