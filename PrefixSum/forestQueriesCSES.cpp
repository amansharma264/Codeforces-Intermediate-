#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            char c;
            cin >> c;
            v[i][j] = (c == '*');
        }
    }
    vector<vector<int>> pre(n, vector<int>(n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            pre[i][j] = v[i][j];
            if(j > 0){
                pre[i][j] += pre[i][j-1];
            }
            if(i > 0){
                pre[i][j] += pre[i-1][j];
            }
            if(i > 0 && j > 0){
                pre[i][j] -= pre[i-1][j-1];
            }
        }
    }
    while(q--){
        int y1,x1,y2,x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1--, x1--, y2--, x2--;
        int ans = pre[y2][x2];
        if(x1 > 0){
            ans -= pre[y2][x1-1];
        }
        if(y1 > 0){
            ans -= pre[y1-1][x2];
        }
        if(y1 > 0 && x1 > 0){
            ans += pre[y1-1][x1-1];
        }
        cout << ans << " ";

    }

}

int main(){
    solve();
}