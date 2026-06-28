#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fact(int n){
    if(n == 0){
        return 0;
    }
    return n*fact(n-1);
}

void solve(){
    int ans = fact(50);
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