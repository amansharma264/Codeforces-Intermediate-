#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i<n; i++){
        cin >> a[i];
    }
    ll count = INT_MAX;
    ll evenCount = 0;
    for(ll i = 0; i<n; i++){
        if(a[i] % 2 == 0){
            evenCount++;
        }
        if(a[i] % k == 0){
            count = 0;
            count = min(count, ((k - a[i] % k) % k));
        }
        if(k == 4){
            if(evenCount >= 2){
                count = min(count, 0LL);
            }
            else if(evenCount == 1){
                count = min(evenCount, 1LL);
            }
            else if(evenCount == 0){
                count = min(count, 2LL);
            }
            cout << count << endl;
        }
    }
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}