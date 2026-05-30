#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    ll distance = dx*dx + dy*dy;
    if((abs(r1-r2)*(abs(r1-r2)) <= distance && distance <= (r1 + r2)*(r1 + r2))){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}