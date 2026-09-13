#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>fact;
    for(int i = 1; i*i <=n; i++){
        if(n % i == 0){
            fact.push_back(i);
            if(i != n/i){
                fact.push_back(n/i);
            }
        }
    }
    // T. C - O(sqrt(n))
}

void prime(){
    int n;
    cin >> n;
    vector<int> prime_factor;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
                prime_factor.push_back(i);
            }
        }
    }
    if(n > 1){
        prime_factor.push_back(n);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--){
        solve();
        prime();
    }
}