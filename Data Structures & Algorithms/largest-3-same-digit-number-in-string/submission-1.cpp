class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int n = num.size();
        for(int i = 0; i < n - 2; i++) {
            if(num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
                res = max(res, num.substr(i, 3));
            }
        }
        return res;
    }
};