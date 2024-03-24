// You are given a positive integer k. Initially, you have an array nums = [1].

// You can perform any of the following operations on the array any number of times (possibly zero):

// Choose any element in the array and increase its value by 1.
// Duplicate any element in the array and add it to the end of the array.
// Return the minimum number of operations required to make the sum of elements of the final array greater than or equal to k.

 

// Example 1:

// Input: k = 11

// Output: 5

class Solution {
public:
    int minOperations(int k) {
        if(k==1) return 0;
        int n = ceil(sqrt(k));
        int ans = n-1 + ceil(float(k-n)/float(n));
        return ans;
    }
};
