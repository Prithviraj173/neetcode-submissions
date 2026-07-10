class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int num : nums) mp[num]++;
        for(const auto [val, freq] : mp) {
            if(freq == 1) ans.push_back(val);
        }
        return ans;
    }
};