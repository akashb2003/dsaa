// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.

 

// Example 1:

// Input: nums = [7,2,5,10,8], k = 2
// Output: 18
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
// Example 2:

// Input: nums = [1,2,3,4,5], k = 2
// Output: 9
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.

class Solution {
public:

    int countSplit(int m, vector<int>& nums){
        int splitCount = 1;
        int splitSum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(splitSum + nums[i] <= m){
                splitSum+= nums[i];
            }
            else{
                splitCount++;
                splitSum = nums[i];
            }
        }
        return splitCount;
    }

    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int h =  accumulate(nums.begin(), nums.end(), 0);

        while(l<=h){
            int m = l+(h-l)/2;
            int splitArr = countSplit(m, nums);
            if(splitArr > k){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        return l;
    }
};
