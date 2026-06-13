class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            int num = abs(nums[i]);
            int index = num - 1;

            // Number already visited
            if(nums[index] < 0) {
                ans.push_back(num);
            }
            // Mark as visited
            else {
                nums[index] = -nums[index];
            }
        }

        return ans;
    }
};