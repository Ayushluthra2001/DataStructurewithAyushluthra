class Solution {
public:

    int subarrayLCM(vector<int>& nums, int k) {
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            unsigned int temp=nums[i];
            for(int j=i;j<nums.size();j++){
                temp=lcm(temp,nums[j]);
                if(temp==k) count++;
            }  
            
        }
        
        return count;
    }
};
