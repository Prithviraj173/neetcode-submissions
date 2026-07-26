class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                mp[grid[i][j]]++;
            }
        }
        int ans1 = 0, ans2 = 0;
        for(int num = 1; num <= n * n; num++) {
            int freq = mp[num];
            if(freq == 0) ans2 = num;
            if(freq == 2) ans1 = num;
        }
        return {ans1, ans2};
    }
};