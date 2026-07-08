class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res;
        for(int n : nums1) {
            for(int m : nums2) {
                if(n == m) {
                    res.insert(n);
                    break;
                }
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};