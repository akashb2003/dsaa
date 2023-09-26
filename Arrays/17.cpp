// Given two integer arrays nums1 and nums2, return an array of their intersection.
// Each element in the result must be unique and you may return the result in any order.

class Solution {
public:

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // sort both arrays
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0, j=0;
        int m=nums1.size()-1, n=nums2.size()-1;
        vector<int> ans;

        while(i<=m && j<=n){

            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;

            }else if(nums1[i]<nums2[j]){
                i++;

            }else{
                j++;
            }
            ans.erase(unique(ans.begin(), ans.end()), ans.end()); 
        }
        return ans;
    }
};
