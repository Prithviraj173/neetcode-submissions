class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length(), i = n - 1, len = 0;
        while(s[i] == ' ') i--;
        while(i >= 0 && s[i] != ' ') {
            i--;
            len++;
        }
        return len;
    }
};