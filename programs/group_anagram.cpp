#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> ch;
        vector<vector<string>> result = {{""}};
        for(auto x : strs){
            cout<<x<<endl;
        }
        for(int i = 0;i<strs.size();i++){
            
        }
        return result;
    }


int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}