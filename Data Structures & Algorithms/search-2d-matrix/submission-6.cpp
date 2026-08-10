class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> arr;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                arr.push_back(matrix[i][j]);
            }
        }
        for(int i = 0; i < m * n; i++) {
            if(target == arr[i]) return true;
        }
        return false;
    }
};
