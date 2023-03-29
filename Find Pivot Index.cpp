class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix(nums.size(),0);
        vector<int>suffix(nums.size(),0);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix[i]=sum;
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
            suffix[i]=sum;
        }
        for(int i=0;i<nums.size();i++){
            if(prefix[i]==suffix[i]) return i;
        }
        return -1;
    }
};
