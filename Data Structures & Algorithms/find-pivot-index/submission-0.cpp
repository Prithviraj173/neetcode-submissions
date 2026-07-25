class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int lt = 0, rt = 0;
            for(int j = 0; j < i; j++) lt += nums[j];
            for(int j = i + 1; j < n; j++) rt += nums[j];
            if(lt == rt) return i;
        }
        return -1;
    }
};