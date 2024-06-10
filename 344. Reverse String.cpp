https://leetcode.com/problems/reverse-string/submissions/1274663086
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> s2(s.size()) ; 
        int x = 0 ; 
        for(int i = 0; i <s.size()/2;i++){
            char temp = s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i] = temp;
           
        }
    
    }
};
