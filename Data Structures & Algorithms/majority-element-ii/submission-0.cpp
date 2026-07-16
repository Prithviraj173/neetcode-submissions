class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int num : nums) mp[num]++;
        for(const auto &[val, freq] : mp) {
            if(freq > (n / 3)) ans.push_back(val);
        }
        return ans;
    }
};