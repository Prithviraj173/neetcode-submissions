class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans = 1;
        while(true) {
            bool flag = true;
            for(int &num : nums) {
                if(ans == num) {
                    flag = false;
                    break;
                }
            }
            if(flag) return ans;
            ans++;
        }
    }
};