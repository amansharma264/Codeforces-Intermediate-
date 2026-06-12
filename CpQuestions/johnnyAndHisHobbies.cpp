#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    ll n;
    cin >> n;
    int arr[n];
    vector<ll> temp(1024, 0);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        temp[arr[i]]++;
    }
    ll ans = -1;
    for(int k = 1; k<=1023; k++){
        vector<ll> freq(1024, 0);
        for(int i = 0; i<n; i++){
            freq[arr[i] ^ k]++;
    }
    bool flag = true;
    for(int i = 0; i<1024; i++){
        if(temp[i] != freq[i]){
            flag = false;
            break;
        }
    }
    if(flag == true){
        ans = k;
        break;
    }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}