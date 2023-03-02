class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i+=2){
            int first=nums[i];
            int second=nums[i+1];
            for(int j=0;j<first;j++){
                ans.push_back(second);
            }

        }
        return ans;
    }
};
