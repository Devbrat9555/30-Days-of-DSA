// Day 6: LeetCode #88 - Merge Sorted Array
// Problem Link: https://leetcode.com/problems/merge-sorted-array/
// Approach: Merge from behind using 3 pointers

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;              // nums1 ka last valid element
        int j = n - 1;              // nums2 ka last element
        int k = m + n - 1;          // nums1 ka last position

        while(i >= 0 && j >= 0)
        {
            if(nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while(j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    cout << "nums1 before merge: ";
    for(int num : nums1) cout << num << " ";
    cout << endl;

    sol.merge(nums1, m, nums2, n);
    
    cout << "nums1 after merge: ";
    for(int num : nums1) cout << num << " ";
    cout << endl;
    
    return 0;
}
