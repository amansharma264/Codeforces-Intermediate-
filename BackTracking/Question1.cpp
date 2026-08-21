// Give an array[] of non-negative integers and a value sum the task is to check if there is a subset of the given array whose sum is equal to  the given target_sum if such exists return true otherwise return false


#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool helper(int idx, int sum, int n, vector<int>&v, int & targetSum){
    if(sum == targetSum){
        return true;
    }
    if(idx >= n){
        return false;
    }
    if(sum > targetSum){
        return false;
    }
    bool ans = helper(idx + 1, sum+=v[idx], n,v,targetSum);
    if(ans == true){
        return true;
    }
    ans = helper(idx + 1,sum, n,v,targetSum);
    return ans;
}

void solve(){
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    int targetSum;
    cin >> targetSum;
    bool ans = helper(n,v,targetSum);
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}