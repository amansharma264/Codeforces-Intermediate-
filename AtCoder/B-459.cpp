#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        char first = s[0];
        if(first == 'a' || first == 'b' || first == 'c'){
            cout << 2;
        }
        else if(first == 'd' || first == 'e' || first == 'f'){
            cout << 3;
        }
        else if(first == 'g' || first == 'h' || first == 'i'){
            cout << 4;
        }
        else if(first == 'j' || first == 'k' || first == 'l'){
            cout << 5;
        }
        else if(first == 'm' || first == 'n' || first == 'o'){
            cout << 6;
        }
        else if(first == 'p' || first == 'q' || first == 'r' || first == 's'){
            cout << 7;
        }
        else if(first == 't' || first == 'u' || first == 'v'){
            cout << 8;
        }
        else if(first == 'w' || first == 'x' || first == 'y' || first == 'z'){
            cout << 9;
        }
    }
    cout << "\n";

}

int main(){
    solve();
}