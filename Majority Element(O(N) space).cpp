class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        for(auto i : mapping){
            if(i.second>nums.size()/2) return i.first;
        }
        return -1;
    }
};
