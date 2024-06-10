https://leetcode.com/problems/find-peak-element/submissions/1283438007
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high = nums.size()-2 ; 
        int low = 1 ; 
        if(nums.size()==1)
        return 0;
        else if(nums[0]>nums[1]){
            return 0;
        }
        else if(nums[high+1]>nums[high])
       { return high+1;}
       while(low<=high){
        int mid = low + (high-low)/2;
        if((nums[mid]>nums[mid-1])&&(nums[mid]>nums[mid+1]))
            return mid ;
            if(nums[mid]>nums[mid-1]){
                low = mid + 1;
            }
            else{
                high = mid -1 ;
            }
       }
       return 0;
    }
};
