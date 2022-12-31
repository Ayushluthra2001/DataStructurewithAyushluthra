class Solution {
public:
    int solve(int n , int m , int i , int j,vector<vector<int>>& dp){
        if(i>=n || j>=m) return 0;
        if(i==n-1 && j==m-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=solve(n,m,i+1,j,dp)+solve(n,m,i,j+1,dp);
        return dp[i][j]=ans;
    }
    int uniquePaths(int m, int n) {
        int ans=0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,0,0,dp);
    }
};
