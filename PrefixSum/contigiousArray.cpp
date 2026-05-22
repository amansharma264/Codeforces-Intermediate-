#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    map<int, int> mp; // A particular sum occur for the first time at which index
    int ans = 0;
    int sum = 0;
    for(int i = 0; i<n; i++){
        if(v[i] == 0) sum -= 1;
        else sum += 1;
        if(sum == 0){
            // ans = i + 1;
            ans = max(ans, i + 1);
        }
        else{
            if(mp.find(sum) != mp.end()){
                ans = max(ans, i-mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
    }
    return ans;
}

int  main(){
    int result = solve();
    cout << result << '\n';
    return 0;
}

// Time Complexity = O(nlogn)
