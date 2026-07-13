class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        richest_wealth= 0
        for i in range(len(accounts)):
            max_wealth= sum(accounts[i])
            if (max_wealth>richest_wealth):
                richest_wealth= max_wealth
        return richest_wealth