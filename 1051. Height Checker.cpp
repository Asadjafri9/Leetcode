https://leetcode.com/problems/height-checker/submissions/1284104880?envType=daily-question&envId=2024-06-10
 
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> store = heights;
      
        sort(store.begin(), store.end());
        for (int i = 0; i < heights.size(); i++) {
            if (store[i] != heights[i])
                count++;
        }
        return count;
    }
};
