class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0],maxprofit=0;
        for(auto i:prices){
            int profit = i-minp;
            if(i<minp ){
                minp=i;
            }
            maxprofit=max(profit,maxprofit);

        }
        return maxprofit;
    }
};
