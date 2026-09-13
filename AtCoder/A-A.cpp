#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
     string s;
     cin >> s;

     for(int i = 0; i<s.length(); i++){
        if(s[i] != 'A'){
            s[i] = '.';
        }
     }
     cout << s << endl;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
    
}
