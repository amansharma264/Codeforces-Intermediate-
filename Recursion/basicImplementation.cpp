#include <bits/stdc++.h>
#define ll long long
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n-1);
}

void solve(){
    int ans = sum(50);
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