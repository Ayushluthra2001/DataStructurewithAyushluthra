class Solution {
public:
    int solve(int n ,vector<int>&a, int curr, int prev,vector<vector<int> > &dp){
        if(curr==n){
            return 0;
        }
        if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
        int take=0;
        if(prev==-1 || a[curr]>a[prev]){
            // now our prev become curr
            take=1+solve(n,a,curr+1,curr,dp);
        }
        int nottake=0;
        // prev remain the same 
        nottake=solve(n,a,curr+1,prev,dp);
        return dp[curr][prev+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        vector<vector<int> > dp(n,vector<int>(n+1,-1));
        return solve(n,a,0,-1,dp);
    }
};
// This code accept all the test cases for geeksforgeeks but not for leetcode 
