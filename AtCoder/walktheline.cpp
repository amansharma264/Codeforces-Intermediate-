#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

void solve(){
    ll n, s, L;
    cin >> n >> s >> L;

    vector<ll> a(n - 1);
    for(int i = 0; i < n - 1; i++){
        cin >> a[i];
    }
    vector<ll> pref(n, 0);

    for(int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + a[i - 1];
    }

    s--;

    ll ans = 1;

    for(int left = 0; left <= s; left++){
        for(int right = s; right < n; right++){

            ll leftDist = pref[s] - pref[left];

            ll rightDist = pref[right] - pref[s];

            ll cost1 = 2 * leftDist + rightDist;

            ll cost2 = leftDist + 2 * rightDist;

            ll cost = min(cost1, cost2);

            if(cost <= L){
                ans = max(ans, (ll)(right - left + 1));
            }
        }
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}