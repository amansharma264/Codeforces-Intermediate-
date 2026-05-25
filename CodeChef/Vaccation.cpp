#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> v[i][j];
        }
    }
        vector<vector<int>> pre(n, vector<int>(m));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                pre[i][j] = v[i][j];
            
            if(i > 0){
                pre[i][j] += pre[i-1][j];
            }
            if(j > 0){
                pre[i][j] += pre[i][j-1];
            }
            if(i > 0 && j > 0){
                pre[i][j] -= pre[i-1][j-1];
            }
        }
    }
            ll q;
            cin >> q;
            while(q--){
                ll a,b,c,d;
                cin >> a >> b >> c >> d;
                a--, b--, c--, d--;
                ll ans = pre[c][d];
                if(a > 0){
                    ans -= pre[a-1][d];
                }
                if(b > 0){
                    ans -= pre[c][b-1];
                }
                if(a > 0 && b > 0){
                    ans += pre[a-1][b-1];
                }
                ll cells = (c - a + 1) * (d - b + 1);
                if(ans == cells) cout << 1 << "\n";
                else cout << 0 << "\n";
            }    
}

int main(){
    solve();
}