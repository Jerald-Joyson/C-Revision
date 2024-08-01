#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int temp = nums[i]+nums[j];
                if(target == temp){
                    a.push_back(i);
                    a.push_back(j);
                    break;
                }
            }
        }
        return a;
        
    }


int main(){
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> a = twoSum(nums, target);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}


















/*


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // To store the number and its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        // Check if the complement exists in the map
        if (numMap.find(complement) != numMap.end()) {
            // If found, return the indices
            return {numMap[complement], i};
        }
        // Otherwise, add the number and its index to the map
        numMap[nums[i]] = i;
    }
    // In case no solution is found (though the problem guarantees there is one)
    return {};
}

int main() {
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Indices: [" << result1[0] << ", " << result1[1] << "]" << endl;

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    cout << "Indices: [" << result2[0] << ", " << result2[1] << "]" << endl;

    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = twoSum(nums3, target3);
    cout << "Indices: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}

*/