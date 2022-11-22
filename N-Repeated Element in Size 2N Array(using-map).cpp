class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        for(auto i : mapping){
            if(i.second>=2) return i.first; 
        }
        return -1;
    }
};
