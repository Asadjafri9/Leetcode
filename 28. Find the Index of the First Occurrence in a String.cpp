https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1146331318
class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        for (int i = 0; i < haystack.length(); i++)
        {
            if (haystack.at(i) == needle.at(0))
            {
                bool flag = true;
                for(int j = 0 ; j < needle.length() ; j++ )
                    {
                        if(haystack[i+j]!=needle[j])
                        {
                        flag = false ; 
                        break;
                        }
                    }
                      if(flag)
                    return i ;
       }                    
       }
       return -1;
    
    }
};
