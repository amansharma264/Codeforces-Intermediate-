#include<bits/stdc++.h>
#define ll long long
using namespace std;

// void solve(){
//     bitset<10>b;
//     bitset<10>c(4);
//     bitset<10>d("1001");
//     cout << b << endl;
//     cout << c << endl;
//     cout << d << endl;
// }

void solve(){
    bitset<40>b1; // b1[i] = 0 ---> ith worker doesnot work for company A
    bitset<40>b2;
    int n , m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        b1[x] = 1;
    }
    for(int i = 0; i<m; i++){
        int x;
        cin >> x;
        b2[x] = 1;
    }
    bitset<40>b3;
    b3 = (b1 & b2);
    cout << b3.count() << endl;
}

int main(){
    solve();
}