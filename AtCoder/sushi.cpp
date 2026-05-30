#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int j = 0; j<m; j++){
        cin >> b[j];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i = 0, j = 0, ans = 0;
    while(i <n && j < m){
        if(b[j] <= 2*a[i]){
            ans++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout << ans << endl;
}

int main(){
    solve();
}