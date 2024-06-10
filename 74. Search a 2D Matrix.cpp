https://leetcode.com/problems/search-a-2d-matrix/submissions/1281016268
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = 0;
        int high = cols-1;
        for(int i = 0 ; i < rows ; i++){
            low = 0 ; 
            high = cols-1;
            while(low<=high){
                int mid = low + (high - low)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                if(matrix[i][mid]>target)
                high=mid-1;
                else
                low = mid+1;
            }
        }
        return false;
    }
};
