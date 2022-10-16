class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mapping;
        
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]=1;
        }
        int maxi=-1;
      
        
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            if(mapping[-temp]==1) 
                maxi=max(maxi,nums[i]);
        }
        
        return maxi;
    
    }
    
};
