https://leetcode.com/problems/squares-of-a-sorted-array/submissions/1285841571
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ;i++){
            nums[i]*=nums[i];
        }
         sort(nums.begin(),nums.end());
         return nums ;
    }
};
