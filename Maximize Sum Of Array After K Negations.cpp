class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && k>0;i++){
            if(nums[i]<0) nums[i]=nums[i]*-1,k--;
        }
        if(k>1)
            k=k%2;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && k>0;i++){
            nums[i]=nums[i]*-1;
            k--;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};
