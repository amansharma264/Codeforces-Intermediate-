#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target){
    for(int i = 0; i<arr.size(); i++){
        for(int j = i + 1; j<arr.size(); j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    int target;
    cin >> target;
    if(twoSum(v, target)){
        cout << "true";
    }
    else {
        cout << "False";
    }
}