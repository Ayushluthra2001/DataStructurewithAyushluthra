class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        int n=nums.size()/2;
        for(auto i :mapping){
            if(i.second>n) return i.first;
        }
        return -1;
    }
};
