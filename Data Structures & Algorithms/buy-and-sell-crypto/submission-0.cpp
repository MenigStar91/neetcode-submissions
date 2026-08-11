class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int ans = prices[0];
        int maxProfit = 0;

        for(int i=1;i<prices.size();i++){
            ans = min(ans, prices[i]);
            maxProfit = max(maxProfit, prices[i]-ans);
        }

        return maxProfit;
    }
};
