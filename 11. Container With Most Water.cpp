https://leetcode.com/problems/container-with-most-water/submissions/1284821385?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 ; 
        int r = height.size()-1;
        int max = 0  ;
        while(l<r){
            int m ; 
            if(height[l]<height[r]){
                m = height[l];
            }
            else{
                m = height[r];
            }
            if(m*(r-l)>max){
                max = m*(r-l);
            }
            if(m==height[l]){
                l++;
            }
            else {
                r--;
            }
        }
        return max ; 
    }
};
