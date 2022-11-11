class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        nums.clear();
        for(auto i : mapping){
            if(i.first!=val) {
                for(int k=0;k<i.second;k++)
                    nums.push_back(i.first);
            }
            
        }
        return nums.size();
    }
};
