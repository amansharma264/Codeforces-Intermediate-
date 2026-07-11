#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll maxPath(vector<vector<ll>>& a, int i, int j, int n, int m){
    if(i >= n || j >= m){
        return LLONG_MIN;
    }
    if(i == n -1 && j == m - 1){
        return a[i][j];
    }
    ll down = maxPath(a, i + 1, j, n, m);
    ll right = maxPath(a, i, j + 1, n, m);
    return a[i][j] + max(down, right);

}

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll> (m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }
    cout << maxPath(a,0,0,n,m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}