https://leetcode.com/problems/relative-sort-array/submissions/1284748724?envType=daily-question&envId=2024-06-11 
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;  
        for(int i = 0; i < arr1.size(); i++){
            m[arr1[i]]++;
        }
        vector<int> v1; 
        vector<int> v2;  
        for(int i = 0; i < arr2.size(); i++){
            if(m.find(arr2[i]) != m.end()){
                for(int j = 0; j < m[arr2[i]]; j++){
                    v1.push_back(arr2[i]);
                }
                m.erase(arr2[i]); 
            }
        }
        for(auto it = m.begin(); it != m.end(); ++it){
            for(int j = 0; j < it->second; j++){
                v2.push_back(it->first);
            }
        }
        sort(v2.begin(), v2.end()); 
        for(int i = 0; i < v2.size(); i++){
            v1.push_back(v2[i]);
        }
        return v1;
    }
};
