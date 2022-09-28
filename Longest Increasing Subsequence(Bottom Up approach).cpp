class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        vector<vector<int> > dp(n+1,vector<int>(n+1,0));
        for(int curr=n-1;curr>=0;curr--){
            for(int prev=curr-1;prev>=-1;prev--){
                    int take=0;
                    if(prev==-1 || a[curr]>a[prev]){
                        // now our prev become curr
                        take=1+dp[curr+1][curr+1];
                    }

                    int nottake=0;
                    nottake=0+dp[curr+1][prev+1];
                     dp[curr][prev+1]=max(take,nottake);
            }
        }
        return dp[0][0];
    }
};
