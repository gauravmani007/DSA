class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int maxprofit = prices[0];
        int profit = 0;


        if(n==0){
        return 0;
        }


    for(int i=0; i<prices.size(); i++){
            
             profit = max(profit, prices[i] - maxprofit);

              maxprofit = min(maxprofit, prices[i]);  
            
    }
        return profit;

    }
};