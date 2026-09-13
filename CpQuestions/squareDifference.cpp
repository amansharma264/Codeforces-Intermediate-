#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

void solve(){
    ll a, b;
    cin >> a >> b;
    if((a - b) != 1){
        cout << "NO" << endl;
        return;
    }
    ll num = a + b;
    // we will check weather num is prime or not
    int cnt = 0;
    for(ll i = 2; i*i<=num; i++){
        if(num % i == 0){
            while(num % i == 0){
                cnt++;
                num /= i;
            }
        }
    }
    if(num > 1){
        cnt++;
    }
    if(cnt == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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