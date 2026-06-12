#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string x, y;
    cin >> x >> y;
    ll posX = 0;
    ll posY = 0;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    for(int i = 0; i<y.size(); i++){
        if(y[i] == '1'){
            posY = i;
            break;
        }
    }
    for(int i = posY; i<x.size(); i++){
        if(x[i] == '1'){
            posX = i;
            break;
        }
    }
    cout << posX - posY << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}