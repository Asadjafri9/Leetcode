https://leetcode.com/problems/continuous-subarray-sum/submissions/1281683721
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     
        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1; 

        int cumulativeSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            cumulativeSum += nums[i];
            int remainder = cumulativeSum % k;

         
            if (remainder < 0) {
                remainder += k;
            }

            if (remainderMap.find(remainder) != remainderMap.end()) {
                if (i - remainderMap[remainder] > 1) {
                    return true;
                }
            } else {
                remainderMap[remainder] = i;
            }
        }

        return false;
    }
};
