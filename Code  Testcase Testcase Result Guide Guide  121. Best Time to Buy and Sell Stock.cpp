class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int buy =prices[0];
        
        for(int i=1;i<prices.size();i++){
            maxi=max(maxi,prices[i]-buy);
            if(buy>prices[i]) buy=prices[i];
        }
        return maxi;
    }
};
