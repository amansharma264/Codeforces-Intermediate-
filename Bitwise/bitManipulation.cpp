#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    // int ans = 0;
    // for(int i = 0; i<= 31; i++){
    //     if(n & (1 << i)) ans++;
    // }
    // cout << ans << endl;
    // cout << __builtin_popcount(n) << endl;
    int a = 4;
    cout << __builtin_clz(a) << endl;
    cout << __builtin_ctz(a) << endl;
}

int main(){
    solve();
}