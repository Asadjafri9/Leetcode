https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/submissions/1286841299
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
      sort(seats.begin(),seats.end());  
      sort(students.begin(),students.end());  
      int total = 0 ;
      for(int i = 0 ; i < seats.size() ;i++){
        int x = seats[i] ;
        int y = students[i];
        y-=x ;
        if(y<0){
            y*=-1;
        }
         total+=y;
      }
      return  total ;
    }
};
