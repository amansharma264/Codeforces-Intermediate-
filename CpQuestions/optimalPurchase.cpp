#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll t;
    cin >> t;
    while(t--){
        ll n, a, b;
        cin >> n >> a >> b;
        if(n == 1){
            cout << min(a, b) << "\n";
        }
        else if(n == 2){
            cout << min(2*a, b) << "\n";
        }
        else if(n > 2){
            ll groups = n / 3;
            ll rem = n % 3;
            ll sum = groups * min(3*a, b);

            if(rem == 1){
                sum += min(a,b);
            }
            else if(rem == 2){
                sum += min(2*a,b);
            }
            cout << sum << "\n";
        }
    }
}

int main(){
    solve();
}