class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        for(auto it : mapping)
            if(it.second>1) return true;
        return false;
    }
};
