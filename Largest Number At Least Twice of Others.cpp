class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        int maxi=INT_MIN;
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(mapping[nums[i]]==1 && maxi<nums[i]){
                
                bool check=true;
                for(int j=0;j<nums.size() && check;j++){
                    if(i!=j && nums[j]*2>nums[i]){
                        check=false;
                        break;
                    }
                }

                if(check){
                  
                    maxi=nums[i];
                    index=i;
                }
            }
        }
        return index;
    }
};
