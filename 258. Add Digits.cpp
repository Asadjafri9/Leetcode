https://leetcode.com/problems/add-digits/submissions/1278622164
class Solution {
public:
    int addDigits(int num) {
   if (num==0){
    return 0 ; 
   }
   else if (num>9 &&num%9!=0)
    return num%9;
    else if(num%9==0)
    return 9;
    else
     return num;
   }
};
