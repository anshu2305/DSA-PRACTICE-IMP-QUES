class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini= INT_MAX, profit= 0;
        for(int i=0; i< prices.size(); i++){
            if(mini > prices[i]){
                mini=prices[i];
            }
            else{
                int curr_pro = prices[i]-mini;
                if(curr_pro > profit)
                    profit= curr_pro;
            }    
            
        }
        return profit;
    }
};