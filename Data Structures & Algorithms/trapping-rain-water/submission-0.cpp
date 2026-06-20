class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pref(n);
        pref[0] = height[0];
        for(int i = 1; i < n; i++) {
            pref[i] = max(pref[i - 1],height[i]);
        }

        vector<int> suf(n);
        suf[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1],height[i]);
        }

        int res = 0;
        for(int i = 0; i < n; i++) {
            res += min(pref[i],suf[i]) - height[i];
        }

        return res;
    }
};
