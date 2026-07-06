class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(char c : s) mp[c]++;
        int maxi = INT_MIN, mini = INT_MAX;
        for(auto const& [c, freq] : mp) {
            if(freq > maxi) {
                if(freq % 2 == 1) maxi = freq;
            }
            if(freq < mini) {
                if(freq % 2 == 0) mini = freq;
            }
        }
        return maxi - mini;
    }
};