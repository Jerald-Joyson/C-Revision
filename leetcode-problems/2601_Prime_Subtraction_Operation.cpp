// You are given a 0-indexed integer array nums of length n.
// You can perform the following operation as many times as you want:
// Pick an index i that you haven’t picked before, and pick a prime p strictly less than nums[i], then subtract p from nums[i].
// Return true if you can make nums a strictly increasing array using the above operation and false otherwise.
// A strictly increasing array is an array whose each element is strictly greater than its preceding element.
// Example 1:
// Input: nums = [4,9,6,10]
// Output: true
// Explanation: In the first operation: Pick i = 0 and p = 3, and then subtract 3 from nums[0], so that nums becomes [1,9,6,10].
// In the second operation: i = 1, p = 7, subtract 7 from nums[1], so nums becomes equal to [1,2,6,10].
// After the second operation, nums is sorted in strictly increasing order, so the answer is true.

#include <bits/stdc++.h>
using namespace std;

class Solution {
    void sieveOfEratosthenes(vector<int>& primes, int maxVal) {
        bool sieve[maxVal + 1];
        memset(sieve, false, sizeof(sieve));
        for (int i = 2; i * i < maxVal; ++i) {
            if (sieve[i] == false) {
                for (int j = 2; i * j < maxVal; ++j)
                    sieve[i * j] = true;
            }
        }
        for (int i = 2; i < maxVal; ++i)
            if (sieve[i] == false)
                primes.push_back(i);
    }

public:
    bool primeSubOperation(vector<int>& nums) {
        vector<int> primes;
        int maxVal = *max_element(nums.begin(), nums.end());
        sieveOfEratosthenes(primes, maxVal);

        // Greedy: Try minimizing each value
        for (int i = 0; i < nums.size(); ++i) {
            int diff = i == 0 ? nums[0] - 1 : nums[i] - nums[i - 1] - 1;
            int lb = lower_bound(primes.begin(), primes.end(), diff) -
                     primes.begin();

            if (lb == primes.size() or primes[lb] > diff)
                lb--;
            if (lb < 0) {
                if (i == 0 or nums[i] > nums[i - 1])
                    continue;
                else
                    return false;
            }
            nums[i] -= primes[lb];
        }
        return true;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {4,9,6,10};
    cout << (obj.primeSubOperation(nums) ? "true" : "false") << endl;
    return 0;
}