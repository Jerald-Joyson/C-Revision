# include <iostream>
# include <vector>
# include <unordered_set>
using namespace std;

bool removeDuplicates(vector<int>& nums) {

    unordered_set<int> ch;
    int temp;
    bool t = false;
    int count = nums.size();
    for(int i=0;i<count;i++){
        if(ch.find(nums[i]) != ch.end()){
            t = true;
            break;
        }else{
            ch.insert(nums[i]);
        }
    }
    return t;
}

int main(){
        vector<int> nums = {1,3,2};
        cout<<removeDuplicates(nums)<<endl;
    
        return 0;
    }