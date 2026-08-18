class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxP = 0;
        int bestBuy = prices[0];
        for(int i = 0 ; i < n ; i++){
            if(prices[i] > bestBuy){
                maxP = max(maxP , prices[i] - bestBuy);
            }
            bestBuy = min(prices[i] , bestBuy);
        }
        return maxP;
    }
};