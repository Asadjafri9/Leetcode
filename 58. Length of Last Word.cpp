https://leetcode.com/problems/length-of-last-word/submissions/1146348436
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0 ;
        
        for(int i = s.length()-1 ; i >=0 ;i--)
        {
               if( (s[i]>='a'&& s[i]<='z') || (s[i]>='A'&&s[i]<='Z') )
                    {
                        count++;  
                    }
                    else if(count > 0)
                    {
                        return count;
                    }
        }
        return count ;
 }
};
