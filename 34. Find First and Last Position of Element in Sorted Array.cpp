https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1281004387

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0 ; 
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + ((high - low)/2);
            if(nums[mid]>=target){
                high=mid-1;
            }
            else{
                low = mid +1 ;
            }
        }
        vector<int> a;
        if (low < nums.size() && nums[low] == target)
        {
        a.push_back(low);
             }
             else{
                
        vector<int> c(2,-1);
            return c;
             }
         low = 0 ; 
        high = nums.size()-1;
        while(low<=high){
            int mid = low + ((high - low)/2);
            if(nums[mid]<=target){
                low=mid+1;
            }
            else{
                high = mid -1 ;
            }
        }
        a.push_back(high);
        return a;
    }
};
