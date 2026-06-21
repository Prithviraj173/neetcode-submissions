class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int st = 0, end = 0;
        for(int i = 0; i < s.size(); i++) {
            if(mp.find(s[i]) != mp.end()) st = max(mp[s[i]] + 1, st);
            mp[s[i]] = i;
            end = max(end, i - st + 1);
        }
        return end;
    }
};
