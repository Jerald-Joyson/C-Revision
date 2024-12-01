/*
1346. Check If N and Its Double Exist
Given an array arr of integers, check if there exist two indices i and j such that :
i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int length = arr.size();

        if(length<2) return false;
        
        for(int i=0;i<length;i++){
            int temp = arr[i]*2;
            for(int j=0;j<length;j++){
                if(temp==arr[j] && i!=j){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution obj;
    vector<int> arr = {-2,0,10,-19,4,6,-8};
    cout <<(obj.checkIfExist(arr) ? "true" : "false")<<endl;
    return 0;
}