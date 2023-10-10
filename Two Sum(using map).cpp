class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mapping.find(rem)!=mapping.end()){
                return {i,mapping[rem]};
            }
            mapping[nums[i]]=i;
        }
        return {};
    }
};
