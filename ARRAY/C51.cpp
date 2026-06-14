// Day 3: LeetCode #268 - Missing Number
// Problem Link: https://leetcode.com/problems/missing-number/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            actualSum += nums[i];
        }
        
        int expectedSum = n * (n + 1) / 2;
        return expectedSum - actualSum;
    } 
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1}; // Sample input
    
    cout << "Input array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int missing = sol.missingNumber(nums);
    
    cout << "Missing Number: " << missing << endl;
    
    return 0;
}
