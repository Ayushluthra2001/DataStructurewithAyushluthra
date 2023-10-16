class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        for(auto i : nums){
            if(i!=0) temp.push_back(i);
        }
        for(int i=0;i<nums.size() && i< temp.size() ;i++){
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<nums.size();i++){
            nums[i]=0;
        }
    }
};
