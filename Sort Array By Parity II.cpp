class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        bool flag=true;
        int j=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(flag){
                nums[i]=even[j++];
                flag=!flag;
            }else{
                nums[i]=odd[k++];
                flag=!flag;
            }
        }
        return nums;
    }
};
