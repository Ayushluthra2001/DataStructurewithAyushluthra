class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i=0;
        long long int maxSum=0;
        while(i<nums.size()){
            long long int sum=0;
            int prev=nums[i];
            sum+=nums[i];
            if(i+1==nums.size()) return max(maxSum,sum);
            int j=i+1;
            
            if(nums[j]>prev){
                while(j<nums.size() && nums[j]>prev)
                {
                    prev=nums[j];
                    sum+=nums[j];
                    j++;
                    
                }
            }else{
                prev=nums[j];
                
            }
            i=j;
            
            maxSum=max(maxSum,sum);
            

        }
        return maxSum;
    }
};
