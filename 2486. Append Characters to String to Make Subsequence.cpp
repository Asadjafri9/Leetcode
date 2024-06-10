https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/submissions/1276816831
class Solution {
public:
    int appendCharacters(string s, string t) {
      
        int j = 0; 

        for (int i = 0; i < s.size() && j < t.size(); ++i) {
            if (s[i] == t[j]) {
                ++j; 
            }
        }


        return t.size() - j;
    }
};
