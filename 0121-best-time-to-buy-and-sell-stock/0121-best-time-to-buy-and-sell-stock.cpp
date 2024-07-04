class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min_till_now = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++){
            if (prices[i] < min_till_now) min_till_now = prices[i];
            profit = max(prices[i] - min_till_now, profit);
        }
        return profit;
    }
};