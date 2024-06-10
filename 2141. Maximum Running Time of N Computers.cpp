https://leetcode.com/problems/maximum-running-time-of-n-computers/submissions/1284177045 
class Solution {
public:
    typedef long long ll;
    bool check(int n, vector<int>& batteries , ll mid){
        ll target = n * mid;
        ll sum = 0 ;
        for(int i = 0  ; i < batteries.size() ; i++){
            sum += min((ll)batteries[i],(ll) mid);
        }
        if(sum>=target)
        return true ;
        else
        return false; 
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        ll low = *min_element(begin(batteries),end(batteries));
        ll high ; 
        ll count = 0 ; 
        for(int i= 0 ; i < batteries.size() ; i++){
            count+=batteries[i];
        }
        high = count /n;
        ll r ; 
        while(low<=high){
            ll mid = low + (high - low )/2;
            if(check(n , batteries , mid))
            {
                r = mid ; 
                low = mid + 1 ;
            }
            else{
                high = mid-1;
            }
        }
        return r; 
    }

};
