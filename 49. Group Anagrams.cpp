class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        for(auto str : strs){
            string s = str;
            sort(s.begin(), s.end());
            mpp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
