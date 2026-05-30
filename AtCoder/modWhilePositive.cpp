#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll operations = 0;
    while(m != 0){
        ll x = n % m;
        m = x;
        operations++;
    }
    cout << operations << endl;
}

int main(){
    solve();
}