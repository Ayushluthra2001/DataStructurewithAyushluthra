class Solution {
public:
    int solve(vector<int>&nums,int index){
        if(index<0) return 0;
        if(index==0) return nums[0];
       
        int include=nums[index]+solve(nums,index-2);
        int exclude=solve(nums,index-1);
        return max(include,exclude);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        int ans=max(solve(nums,n-1),solve(nums,n-2));
        return ans;
    }
};
