class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<prices[i+1])
                profit+=(prices[i+1]-prices[i]);
        }
        
        return profit;
    }
};
/*
as wee can buy and sell stocks on same day so we will just check and whenever get that next day stock price is more than current we will just buy and sell that day and make our profit
by this only profitable stocks would be counted
*/