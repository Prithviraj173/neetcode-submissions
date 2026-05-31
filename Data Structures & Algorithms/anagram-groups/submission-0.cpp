class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto const& s : strs) {
            string sorter = s;
            sort(sorter.begin(), sorter.end());
            mp[sorter].push_back(s);
        }
        vector<vector<string>> res;
        for(auto &val : mp) {
            res.push_back(val.second);
        }
        return res;
    }
};
