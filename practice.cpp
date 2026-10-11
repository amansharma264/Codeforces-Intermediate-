#include<bits/stdc++.h>
using namespace std;

    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        int n = knowledge.size();
        int m = knowledge[0].size();
        string ans = "";
        for(int i = 0; i<n; i++){
            string key = knowledge[i][0];
            string value = knowledge[i][1];

            mp[key, value];
        }
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                int close = s.find(')', i);
                string inside = s.substr(i + 1, close);

                if(mp.find(inside) != mp.end()){
                    ans += mp[inside];
                }
                else{
                    ans += "?";
                }
                i = close;
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }

int main(){

}