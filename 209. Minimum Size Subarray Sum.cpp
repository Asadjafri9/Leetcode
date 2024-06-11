https://leetcode.com/problems/minimum-size-subarray-sum/submissions/1284885673?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r = 0;
        int l = 0;
        int idx = INT_MAX;
        long long total = 0;
        while (r < nums.size()) {
            total += nums[r];
            if (total >= target) {
                if (idx > r - l + 1)
                    idx = r - l + 1;
                if (l < nums.size())
                    total -= nums[l];
                total -= nums[r];
                l++;

            } else
                r++;
        }
         return (idx == INT_MAX) ? 0 : idx;
    }
};
