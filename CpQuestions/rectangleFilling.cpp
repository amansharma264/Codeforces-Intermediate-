#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        for(int j = 0; j<m ; j++){
            v[i][j] = s[j];
        }
    }
    if(v[0][0] == v[n-1][m-1] || v[0][m-1] == v[n-1][0]){
        cout << "YES" << endl;
    }
    else{
        string ans = "YES";
        bool impossible = true;
        for(int j = 0; j<m-1; j++){
            if(v[0][j] != v[0][j+1] || v[n-1][j] != v[n-1][j+1]){
                impossible = false;
            }
        }
        if(impossible){
            ans = "NO";
        }
        impossible = true;
        for(int i = 0; i<n-1; i++){
            if(v[i][0] != v[i+1][0] || v[i][m-1] != v[i+1][m-1]){
                impossible = false;
            }
        }
        if(impossible){
            ans = "NO";
        }
        cout << ans << endl;
    }
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