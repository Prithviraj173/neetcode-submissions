class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int num : nums) mp[num]++;

        vector<pair<int, int>> arr;
        for(auto const& p : mp) {
            arr.push_back({p.second, p.first}); 
        }
        sort(arr.rbegin(), arr.rend());

        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
