https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/1280968582
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long min = INT_MAX; 
        long long max = INT_MIN;
        for(int i = 0 ; i <  bloomDay.size() ;i++){
            if(bloomDay[i]<min){
                min = bloomDay[i];
            }
            if(bloomDay[i]>max){
                max = bloomDay[i];
            }
        }
        long long high = max ; 
        long long low = min; 
        long long  b=0 ;
        while(low<=high){
            long long mid =  (high + low) / 2; 
            b=0;
            // int count = 0 ;
            long long cnt =0 ; 
            for(int i = 0 ; i < bloomDay.size() ;i++){
                if(bloomDay[i]<=mid){
                    cnt++;
                }
                else{
                    b+=cnt/k;
                    cnt=0;
                }
            }
            b+=cnt/k;
            if(b<m){
                low = mid + 1 ;
            }
            if(b>=m){
                high = mid-1;
            }
            
        }
        // long long ab = static_cast<long long>m*k;
       if(bloomDay.size()>=static_cast<long long>(m) * k)
        return low; 
        else 
        return -1;
    }
};
