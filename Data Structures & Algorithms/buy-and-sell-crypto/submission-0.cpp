class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, cur = prices[0];
        for(int& num : prices) {
            profit = max(profit, num - cur);
            cur = min(cur, num);
        }

        return profit;
    }
};
