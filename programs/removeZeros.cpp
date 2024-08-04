#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int count = std::count(nums.begin(), nums.end(), 0);
    nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
    nums.insert(nums.end(), count, 0);
}
void print(vector<int> nums){
    for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<",";
    }
    cout<<endl;
}

    int main(){
        vector<int> n1 = {0,1,0,3,12};
        moveZeroes(n1);
        print(n1);
        vector<int> n2 = {0,0,1};
        moveZeroes(n2);
        print(n2);
        vector<int> n3 = {0};
        moveZeroes(n3);
        print(n3);
        
        return 0;
    }