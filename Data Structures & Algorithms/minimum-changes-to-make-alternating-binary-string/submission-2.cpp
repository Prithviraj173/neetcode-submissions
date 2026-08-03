class Solution {
public:
    int minOperations(string s) {
        int n = s.length(), count = 0;
        for(int i = 0; i < n; i++) {
            if(!(i & 1)) {
                if(s[i] == '0') count++;
            } else {
                if(s[i] == '1') count++;
            }
        }
        return min(count, n - count);
    }
};