#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isFair(ll n){
    ll num = n;
    while(num > 0){
        ll lastDigit = num % 10;
        if(lastDigit != 0 && n % lastDigit != 0){
            return false;
        }
        num /= 10;
    }
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        while(!isFair(n)){
            n += 1;
        }
        cout << n << endl;
    };
    // solve();

    return 0;
}