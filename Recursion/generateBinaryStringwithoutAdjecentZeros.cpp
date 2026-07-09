#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> ans;
void func(int n, string s){
    if(n == 0){
        ans.push_back(s);
        return;
    }
    if(s.empty() || s.back() == '1'){
        func(n - 1, s+'0');
        func(n-1, s+'1');
    }
    else{
        func(n-1, s+'1');
    }
    
}

void solve(){
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    // solve();
   
}