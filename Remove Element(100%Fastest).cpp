class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==val) count++;
        //     else if(nums[i]!=val && count!=0){
        //         nums[i-count]=nums[i];
        //     }
        // }
        // return nums.size()-count;
         int begin=0;
    for(int i=0;i<nums.size();i++) if(nums[i]!=val) nums[begin++]=nums[i];
    return begin;

        
   
    }
};
