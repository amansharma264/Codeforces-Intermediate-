#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x;
    cin >> x;
    ll count = 0;
    while(x > 0){
        if(x&1){
            count++;
        }
        x >>= 1;
    }
    cout << count << endl;
}

int main(){
    solve();
}