#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll start, jumps;
    cin >> start >> jumps;
    ll finalPos;
    if(jumps % 4 == 1){
        finalPos = -jumps;
    }
    else if(jumps % 4 == 2){
        finalPos = 1;
    }
    else if(jumps % 4 == 3){
        finalPos = jumps + 1;
    }
    else if(jumps % 4 == 0){
        finalPos = 0;
    }
    if(start % 2 == 0){
        finalPos = start + finalPos;
    }
    else{
        finalPos = start - finalPos;
    }
    cout << finalPos << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
       solve(); 
    }
}

// Tc = O(1)
// Sc = O(1)