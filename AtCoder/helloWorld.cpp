#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin >> x;
    string s = "HelloWorld";
    s.erase(x-1, 1);
    cout << s << endl;
}

int main(){
    solve();
}