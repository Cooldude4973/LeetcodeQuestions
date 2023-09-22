// Given a 0-indexed integer array nums, determine whether there exist two subarrays of length 2 with equal sum. Note that the two subarrays must begin at different indices.

// Return true if these subarrays exist, and false otherwise.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:

// Input: nums = [4,2,4]
// Output: true
// Explanation: The subarrays with elements [4,2] and [2,4] have the same sum of 6.

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int first = 0;
        int second = 1;
        set<int> st;
        while(second < nums.size())
        {
            if(st.find(nums[first] + nums[second]) != st.end())
            {
                return true;
            }
            else
            {
                st.insert(nums[first] + nums[second]);
            }
            first++;
            second++;
        }
        return false;
    }
};