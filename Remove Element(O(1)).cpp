class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val) count++;
            else if(nums[i]!=val && count!=0){
                nums[i-count]=nums[i];
                index++;
            }else{
                index++;
            }
        }
        return index;
    }
};
