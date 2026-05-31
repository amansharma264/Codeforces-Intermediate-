#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &ele:a) cin >> ele;
    ll sum = 0;
    ll minimum = LLONG_MAX;
    for(int i = 0; i<n; i++){
        sum += a[i];
        ll average = sum / (i + 1);
        minimum = min(minimum, average);

        cout << minimum << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
}
}