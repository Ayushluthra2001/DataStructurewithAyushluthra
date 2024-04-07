class Solution {
public:
int solve(vector<int>&nums,int currIndex,int prevIndex){
        if(currIndex>=nums.size()) return 0;
       // if(currIndex==nums.size()-1 && nums[currIndex]>=nums[prevIndex]) return 1;
        int include=0;
        if(prevIndex!=-1 && nums[currIndex]>nums[prevIndex] )
         include=1+solve(nums,currIndex+1,currIndex);
        else if(prevIndex==-1){
            include=1+solve(nums,currIndex+1,currIndex);
        }
        int exclude=solve(nums,currIndex+1,prevIndex);
        return max(include,exclude);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int longestIncreasing=solve(nums,0,-1);
        return longestIncreasing;
    }
};
