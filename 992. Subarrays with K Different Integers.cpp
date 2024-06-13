https://leetcode.com/problems/subarrays-with-k-different-integers/submissions/1286485175
#include <map>
#include <vector>

using namespace std;
int func(vector<int>& nums, int k) {
    int high = 0;
    map<int, int> m;

    int low = 0;
    int cnt = 0;
    while (high < nums.size()) {
        m[nums[high]]++;
        bool a = true;
        while (m.size() > k) {
            m[nums[low]]--;
            if (m[nums[low]] == 0) {
                m.erase(nums[low]);
            }
            a = false;
            low++;
        }
        cnt += (high - low) + 1;
        high++;
    }
    return cnt;
}
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int x = func(nums, k);
        int y = func(nums, k - 1);
        return x - y;
    }
};
