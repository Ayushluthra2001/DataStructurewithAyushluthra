class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int start=0,end=nums.size()-1;
        while(start<=end){
            maxi=max(nums[start]+nums[end],maxi);
            start++;
            end--;
        }
        return maxi;
    }
};
