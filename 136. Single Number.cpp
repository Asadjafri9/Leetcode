https://leetcode.com/problems/single-number/submissions/1279330754
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int ,int > m;
        for(int i = 0 ; i < nums.size() ;i++){
            m[nums[i]]++;
        }
        for(auto it = m.begin() ; it!=m.end() ;it++){
            if(it->second == 1 ){
                return it->first; 
            }
        }
        return 0 ;
    }
};
