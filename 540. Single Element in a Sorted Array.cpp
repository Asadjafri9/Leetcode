https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/1275894056
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int> m ; 
        for(int i = 0 ; i < nums.size();i++){
            m[nums[i]]++;
           
            }
            for(int i = 0 ; i < nums.size();i++){
                if(m[nums[i]]==1)
                return nums[i];
            }
            return nums[0];
        
    }
};
