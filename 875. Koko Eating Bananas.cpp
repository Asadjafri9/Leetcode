https://leetcode.com/problems/koko-eating-bananas/submissions/1279991561
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    //    int high = *max_element(piles.begin(), piles.end());
        int low = 1 ;
        int  max = 0 ; 
        for(int i= 0 ; i < piles.size() ; i++){
            if(piles[i]>max){
                max = piles[i] ;
            }
        }

        int high = max ; 
        while(low<high){
            int mid = (high + low )/2 ;
            int t = 0 ; 
            for(int i = 0 ; i < piles.size(); i++){
                t += ceil(double(piles[i])/double(mid));
            }
            if(t<=h){
                high = mid ;
            }
            else{
                low = mid+1;

            }
        }
        return low; 
    }
};
