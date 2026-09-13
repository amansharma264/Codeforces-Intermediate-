#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

pair<int, int> finddigits(ll n) {
    int maxDigits = 0;
    int minDigits = 9;

    while(n > 0) {
        int lastDigits = n % 10;

        maxDigits = max(maxDigits, lastDigits);
        minDigits = min(minDigits, lastDigits);

        n = n / 10;
    }

    return {minDigits, maxDigits};
}

void solve(){
    ll a, k;
    cin >> a >> k;

    for(long long i = 1; i<k; i++){
        pair<int, int> digits = finddigits(a);
        int minDigits = digits.first;
        int maxDigits = digits.second;
        
        if(minDigits == 0){
            break;
        }
        a = a + minDigits * maxDigits;
        
    }
    cout << a << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solve();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}