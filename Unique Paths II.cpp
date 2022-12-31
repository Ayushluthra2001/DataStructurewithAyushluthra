class Solution {
public:
    int solve(int n, int m, int i, int j, vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid){
        // if(i>=n || j>=m) return 0;
        if(i==n-1 && j==m-1 && obstacleGrid[i][j]!=1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(i+1<=n-1 && obstacleGrid[i+1][j]==0 ){
            ans+=solve(n,m,i+1,j,dp,obstacleGrid);
        }
        if(j+1<=m-1 && obstacleGrid[i][j+1]==0){
            ans+=solve(n,m,i,j+1,dp,obstacleGrid);
        }
        return dp[i][j]=ans;
       
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1) return 0;
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(n,m,0,0,dp,obstacleGrid);
    }
};
