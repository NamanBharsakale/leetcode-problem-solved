class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int bestBuy = prices[0],maxProfit = 0;


        for(int i = 1; i < n;i++)
        {

            if(bestBuy > prices[i])
            { 
                bestBuy = prices[i];
            }
            maxProfit = max(maxProfit,(prices[i] - bestBuy));
            
        }

        return maxProfit;
    }
};