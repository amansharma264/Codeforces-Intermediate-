#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n;
   cin >> n;
   vector<int> a(n);
   for(int i = 0; i<n; i++){
    cin >> a[i];
   }
   for(int i = 0; i<n ;i++){
    if(a[i] == -1){
        if(i == 0 || i == n-1){
            a[i] = 1;
        }
        else{
            a[i] = 0;
        }
    }
   }
   for(int i = 0; i<n; i++){
    cout << a[i] << " ";
   }
   cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}