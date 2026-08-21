#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
    
}