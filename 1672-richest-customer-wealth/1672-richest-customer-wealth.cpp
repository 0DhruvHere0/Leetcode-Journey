class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest_wealth= 0;
        for (int i=0; i<accounts.size(); i++){
            int max_wealth= accumulate(accounts[i].begin(), accounts[i].end(), 0);
            if (max_wealth>richest_wealth){
                richest_wealth= max_wealth;
            }
        }
        return richest_wealth;
    }
};