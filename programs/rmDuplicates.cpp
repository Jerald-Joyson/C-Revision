#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        set<int> ch(nums.begin(),nums.end());
        nums.assign(ch.begin(),ch.end());
        return ch.size();
    }

    int main(){
        vector<int> nums = {1,1,2};
        removeDuplicates(nums);
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<endl;
        }
        return 0;
    }