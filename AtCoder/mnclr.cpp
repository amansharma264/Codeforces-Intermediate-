#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

void solve(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        cout << s[i];

        if(i != s.size() - 1){
            cout << 'o';
        }
    }

    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}