class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        for(int i = 0; i < n - 1; i++) {
            int cur_max = INT_MIN;
            int cur = arr[i];
            for(int j = i + 1; j < n; j++) {
                if(arr[j] > cur_max) cur_max = arr[j];
            }
            ans.push_back(cur_max);
        }
        ans.push_back(-1);
        return ans;
    }
};