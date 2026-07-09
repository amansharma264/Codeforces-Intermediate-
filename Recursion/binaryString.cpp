#include <bits/stdc++.h>
#define ll long long
using namespace std;

string bin_string(int n){
    if(n < 2){
        return to_string(n);
    }
    string ans = bin_string(n/2);
    int rem = n % 2;
    ans += (to_string(rem));
    return ans;
}

void solve(){
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    // solve();
   
}