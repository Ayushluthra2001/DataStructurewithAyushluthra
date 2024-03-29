class Solution {
public:
    int solve(int index,int endingIndex, vector<int>& slices,int n,vector<vector<int>>& dp){
        if(n==0 || index>endingIndex){
            return 0;
        }
        if(dp[index][n]!=-1) return dp[index][n];
        int take=slices[index]+solve(index+2,endingIndex,slices,n-1,dp);
        int nottake=0+solve(index+1,endingIndex,slices,n,dp);
        return dp[index][n]=max(take,nottake);
    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        vector<vector<int>>dp(k,vector<int>(k,-1));
       // vector<int>dp()
        int case1=solve(0,k-2,slices,k/3,dp); //  when i will be eating first slice then i can't eat last slice 
        vector<vector<int>>dp2(k,vector<int>(k,-1));
        int case2=solve(1,k-1,slices,k/3,dp2); // when i will not eating first slice 
        return max(case1,case2);
    }
};
