class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1) return true;
        int index=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]) {
                index=i;
                break;
            }
        }
        if(index==-1) return true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) return false;
        }
        return true;
    }
};
