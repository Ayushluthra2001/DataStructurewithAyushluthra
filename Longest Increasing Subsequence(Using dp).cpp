class Solution {
public:
int solve(vector<int>&nums,int currIndex,int prevIndex,vector<vector<int>>&dp){
        if(currIndex>=nums.size()) return 0;
       // if(currIndex==nums.size()-1 && nums[currIndex]>=nums[prevIndex]) return 1;
        int include=0;
        if(dp[currIndex][prevIndex+1]!=-1) return dp[currIndex][prevIndex+1];
        if(prevIndex!=-1 && nums[currIndex]>nums[prevIndex] )
         include=1+solve(nums,currIndex+1,currIndex,dp);
        else if(prevIndex==-1){
            include=1+solve(nums,currIndex+1,currIndex,dp);
        }
        int exclude=solve(nums,currIndex+1,prevIndex,dp);
        return dp[currIndex][prevIndex+1]=max(include,exclude);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        int longestIncreasing=solve(nums,0,-1,dp);
        return longestIncreasing;
    }
};
