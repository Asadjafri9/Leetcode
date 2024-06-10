https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/1282690042
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int > modCount;
        modCount[0]=1;
       int sum = 0 , count =0 ; 
        for(int i = 0 ; i < nums.size() ;i++){
            sum+=nums[i];
           int mod = ((sum % k) + k) % k;
              if (modCount.find(mod) != modCount.end()) {
                count += modCount[mod];
            }
            modCount[mod]++; 
            // if(m[x]>1)
            // t+=m[x];
        }
        return count;  
    }
};
