class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       for(int i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1]){
               nums[i]*=2;
               nums[i+1]=0;
           }
       } 
        int count_zero=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count_zero++;
            else ans.push_back(nums[i]);
        }
        for(int i=0;i<count_zero;i++){
            ans.push_back(0);
        }
        return ans;
    }
};
