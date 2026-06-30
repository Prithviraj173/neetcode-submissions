class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < n) {
            int temp = i;
            while(temp < n && nums[i] == nums[temp]) temp++;
            if((temp - i) % 2 == 1) return false;
            i = temp;
        }
        return true;
    }
};