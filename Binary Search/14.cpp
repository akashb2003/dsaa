// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;

        int l=1, h=n-2, m = l+(h-l)/2;
        while(l<=h){
            if(nums[m]> nums[m+1] && nums[m]>nums[m-1]) return m;
            
            else if(nums[m]>nums[m-1]) l = m+1;
            else h = m-1;
            
            m = l+(h-l)/2;
        }
        return -1;
    }
};
