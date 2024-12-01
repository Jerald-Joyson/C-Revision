#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int strLen = s.size();
        if(strLen <= 1) return true;
        int i = 0, j = strLen - 1;
        while(i < j){
            while(!isalpha(s[i])) {
                i++;
                cout<<s[i]<<" "<<s[j]<<endl;
                if(i<j) return false;
            }
            while(!isalpha(s[j])) {
                j--;
                cout<<s[i]<<" "<<s[j]<<endl;
                if(j<i) return false;
                }
            if(tolower(s[i]) != tolower(s[j])){
                cout<<s[i]<<" "<<s[j]<<endl;
                return false;
            }
            cout<<s[i]<<" "<<s[j]<<endl;
            i++;
            j--;
        }
        
        return true;
    }
};


int main(){
    Solution obj;
    string s = "A man, a plan, a canal: Panama";
    cout <<(obj.isPalindrome(s) ? "true" : "false")<<endl;
    return 0;
}