class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int val = 0, n = num.size();
        for(int i = 0; i < n - 2; i++) {
            if(num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
                string temp = num.substr(i, 3);
                if(val <= stoi(temp)) {
                    val = stoi(temp);
                    res = temp;
                }
            }
        }
        return res;
    }
};