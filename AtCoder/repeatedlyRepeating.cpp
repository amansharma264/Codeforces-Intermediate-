#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll h, w;
    cin >> h >> w;

    vector<string> grid(h);
    for(int i = 0; i < h; i++) cin >> grid[i];

    queue<pair<ll, ll>> q;
    vector<vector<ll>> dist(h, vector<ll>(w, -1));

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(grid[i][j] == '#'){
                dist[i][j] = 0;
                q.push(make_pair(i, j));
            }
        }
    }

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    while(!q.empty()){
        pair<ll, ll> p = q.front();
        ll x = p.first;
        ll y = p.second;
        q.pop();

        for(int k = 0; k < 8; k++){
        ll nx = x + dx[k];
        ll ny = y + dy[k];

        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if(dist[nx][ny] != -1) continue;

        dist[nx][ny] = dist[x][y] + 1;
        q.push(make_pair(nx, ny));
    }
}

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(dist[i][j] != -1 && dist[i][j] % 2 == 0){
                cout << '#';
            }
            else{
                cout << '.';
            }
        }
        cout << "\n";
    }
}

int main(){
    solve();
}