#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    for(int mask = 0; mask<(1 << n); mask++){
        for(int i = 0; i<n; i++){
            if(mask & (1 << i)){
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    solve();
}

// Time Complexity = N*2^N