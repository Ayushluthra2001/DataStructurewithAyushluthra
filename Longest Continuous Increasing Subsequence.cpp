class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int maxi=0;
        int i=1,j=0;
        while(i<nums.size()){
            j=i;
            int count=1;
            while(j<nums.size() && nums[j]>nums[j-1]) {
                j++;
                count++;
            }
            maxi=max(maxi,count);
            i=j+1;
        }
        return maxi;
    }
};
