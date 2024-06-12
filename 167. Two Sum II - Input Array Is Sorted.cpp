https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1285852731
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0 ;  int h = nums.size()-1;
        while(l<=h){
            // int mid = low+(high-low)/2;
            if(nums[l]+nums[h]==target){
                return {l+1,h+1};
            }
            if(nums[l]+nums[h]<target)
            l++;
            else{
                h--;
            }
        }
        return {-1,-1};
    }
};
