https://leetcode.com/problems/score-of-a-string/submissions/1274035540
class Solution {
public:
    int scoreOfString(string s) {
        int total= 0  ; 
        int num  = 0 ;
        for(int i = 0;  i < (s.size())-1 ; i++){
            num = int(s[i])-int(s[i+1]);
            if(num<0){
                num*=-1;
            }
            total +=num ; 
        }
        return total;
    }
};
