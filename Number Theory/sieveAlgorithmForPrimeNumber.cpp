#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e7;
bool prime[N];
    // prime[i] = 1 --> i is a prime number

void solve(){

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    for(int i = 0; i<N; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i <=N; i++){
        if(prime[i] == 1){
            for(int j = i*i; j<N; j+=i){
                prime[j] = 0;
            }
        }
    }
    // TC - O(NlogN)
    // Tc - O(N(log(logN)))

    while(t--){
        solve();
    }
}