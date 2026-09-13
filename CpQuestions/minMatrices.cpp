#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;

    if(k <n || k > 2*n - 1){
        cout << -1 << endl;
        return;
    }

    int d = 2*n -k;
    vector<vector<int>> a(n, vector<int>(n));
    int curr = 1;
    for(int i = 0; i<d; i++){
        a[i][i] = curr++;
    }
    for(int i = d; i<n; i++){
        a[i][0] = curr++;
    }
    for(int j = d; j<n; j++){
        a[0][j] = curr++;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(a[i][j] ==0){
                a[i][j] = curr++;
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << a[i][j] << " " << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solve();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}