#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e7;
int spf[N];
    // prime[i] = 1 --> i is a prime number



void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 2; i<= n; i++){
        int cnt = 0;
        int num = i;
        for(int j = 2; j*j <= num; j++){
            if(num % j == 0){
                cnt++;
                while(num % j == 0){
                    num /= j;
                }
            }
        }
        if(num > 1){
            cnt++;
        }
        if(cnt == 2){
            ans++;
        }
    }
    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
}