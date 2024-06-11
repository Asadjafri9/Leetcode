https://leetcode.com/problems/is-subsequence/submissions/1284758104?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx =-1 ; 
        int count = 0 ;
        for(int i = 0 ; i < s.size() ;i++ )
        {
            bool flag = true ;
            for(int j = 0 ; j < t.size() ;j++){
                if(s[i]==t[j] && idx<j){
                    idx = j;
                    count++; 
                    flag = false; 
                    break;
                }
            }
        }
        if(count == s.size())
        return true; 
        else 
        return false;
    }
};
