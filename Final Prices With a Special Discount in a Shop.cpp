class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans = prices;
        int n = prices.size();
        stack<int>s;
        s.push(prices[n-1]);
        
        for(int i=n-2;i>=0;i--){
          
            
            if(!s.empty() && s.top()<=prices[i]){
                int top =s.top();
                
                ans[i]  = prices[i]-top;
                s.push(prices[i]);
            }else{
                while(!s.empty() && s.top()>prices[i]) s.pop();
                if(s.empty()) {
                    s.push(prices[i]);
                }else{
                    ans[i] = prices[i] - s.top();
                    s.push(prices[i]);
                }
            }

        }

        return ans;
    }
};
