class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int num : nums) mp[num]++;
        for(auto const& [val, freq] : mp) {
            if(freq > n/2) return val;
        }
        return -1;
    }
};