https://leetcode.com/problems/find-common-characters/submissions/1278708344
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      map<char, int> freq;
        for (char c : words[0]) freq[c]++;

        for (size_t i = 1; i < words.size(); ++i) {
            map<char, int> map;
            for (char c : words[i]) map[c]++;
            
            for (auto it = freq.begin(); it != freq.end();) {
                if (map.find(it->first) == map.end())
                    it = freq.erase(it);
                else {
                    it->second = min(it->second, map[it->first]);
                    ++it;
                }
            }
        }
        vector<string> res;
        for (const auto& kvp : freq)
            for (int j = 0; j < kvp.second; ++j)
                res.push_back(string(1, kvp.first));
        return res;
    }
};
