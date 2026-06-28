#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;

    vector<ll> originalArray(n), modifiedArray(n);

    for(int i = 0; i < n; i++){
        cin >> originalArray[i];
    }

    for(int i = 0; i < n; i++){
        cin >> modifiedArray[i];
    }

    int left = 0;
    while(left < n && originalArray[left] == modifiedArray[left]){
        left++;
    }

    int right = n - 1;
    while(right >= 0 && originalArray[right] == modifiedArray[right]){
        right--;
    }

    while(left > 0 && modifiedArray[left - 1] <= modifiedArray[left]){
        left--;
    }

    while(right < n - 1 && modifiedArray[right] <= modifiedArray[right + 1]){
        right++;
    }

    cout << left + 1 << " " << right + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}