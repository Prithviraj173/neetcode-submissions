class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        set<int> res;
        for(int num : nums1) mp[num] = 1;
        for(int num : nums2) {
            if(mp[num] == 1) {
                mp[num] == 0;
                res.insert(num);
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};