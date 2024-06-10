https://leetcode.com/problems/power-of-two/submissions/1274651873
class Solution {
public:
    bool isPowerOfTwo(long long n) {
        if(n==1 || n==2){
            return true;
        }
        else{
            long long t = 2;
            while(t<n){
                t*=2;
                if(t==n)
                return true;
            }
            return false;
        }

    }
};
