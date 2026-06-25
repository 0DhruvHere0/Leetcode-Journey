class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_prices= prices[0]
        max_profit= 0
        for i in range(len(prices)):
            if min_prices>prices[i]:
                min_prices= prices[i]
            curr_profit= prices[i]-min_prices
            if curr_profit>max_profit:
                max_profit= curr_profit
        return max_profit