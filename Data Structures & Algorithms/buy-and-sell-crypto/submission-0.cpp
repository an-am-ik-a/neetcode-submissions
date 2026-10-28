class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        int profit=0;
        int buy=0;
        int sell;
        for(sell=1;sell<n;sell++){
            int profit=prices[sell]-prices[buy];
            max_profit=max(max_profit,profit);
            if(prices[buy]>prices[sell]){
                buy=sell;
            }
        }
        return max_profit;
    }
};
