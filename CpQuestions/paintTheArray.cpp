#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    ll evenidx = 0;
    ll oddidx = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            evenidx = __gcd(evenidx, v[i]);
        }
        else{
            oddidx = __gcd(oddidx, v[i]);
        }
    }

    bool flag = true;

    if(evenidx != 0){
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(v[i] % evenidx != 0){
                    flag = false;
                    break;
                }
            }
            else{
                if(v[i] % evenidx == 0){
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            cout << evenidx << endl;
            return;
        }
    }

    flag = true;

    if(oddidx != 0){
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(v[i] % oddidx == 0){
                    flag = false;
                    break;
                }
            }
            else{
                if(v[i] % oddidx != 0){
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            cout << oddidx << endl;
            return;
        }
    }

    cout << 0 << endl;
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