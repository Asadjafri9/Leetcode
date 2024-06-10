https://leetcode.com/problems/roman-to-integer/submissions/1137554949
class Solution {
public:
    int romanToInt(string s) {
        int num = 0 ;
        for(int  x = 0 ; x < s.length() ; x++)
        {
            if(s[x]=='I')
            {
                if(s[x+1]=='V'||s[x+1]=='X')
                    num-=1;
                else
                    num+=1;     
            }
              if(s[x]=='V')
                num+=5;
               
              if(s[x]=='X')
            {
                if(s[x+1]=='L'||s[x+1]=='C')
                num-=10;
                else
                num+=10;
            }
              if(s[x]=='L')
            num+=50;
              if(s[x]=='C')
            {
                if(s[x+1]=='D'||s[x+1]=='M')
                    num-=100;
                else
                num+=100;
            }
                  if(s[x]=='D')
           num+=500;
            if(s[x]=='M')
          num+=1000;
        }
        return num;
    }
};
