class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prices= prices[0];
        int max_profit= 0;
        for (int i=0; i<prices.size(); i++){
            if (min_prices>prices[i]){
                min_prices= prices[i];
            }
            int curr_profit= prices[i]-min_prices;
            if (curr_profit>max_profit){
                max_profit= curr_profit;
            }
        }
        return max_profit;
    }
};