#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, x, s;
    string u;
    cin >> n >> x >> s >> u;
    ll emptyTable = x;
    ll space = 0;
    ll answer = 0;
    for(char c: u){
        if(c == 'I'){
            if(emptyTable > 0){
                emptyTable--;
                space += s - 1;
                answer++;
            }
        }
        else if(c == 'E'){
            if(space > 0){
                space--;
                answer++;
            }
        }
        else{
            if(space > 0){
                space--;
                answer++;
            }
            else if(emptyTable > 0){
                emptyTable--;
                space += s - 1;
                answer++;
            }
        }
    }
    cout << answer << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}