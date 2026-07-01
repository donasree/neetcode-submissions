class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices){
            minPrice = min(minPrice, price);   // best buy price
            int profit = price - minPrice;     // sell today
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
