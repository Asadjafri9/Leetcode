https://leetcode.com/problems/intersection-of-two-arrays/submissions/1277238293
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v; 
        map <int,int> m ;
        for(int i = 0 ; i  < nums1.size(); i++ ){
            for(int j =0 ; j < nums2.size() ;j++){
                if(nums1[i]==nums2[j]){
                    m[nums1[i]]++;
                    if(m[nums1[i]]==1)
                    v.push_back(nums1[i]);
                    j=nums2.size();
                }
            }
        }
        return v;
    }
};
