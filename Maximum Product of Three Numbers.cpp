class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int firstMin=nums[0];
        int secondMin=nums[1];
        int firstMax=nums[nums.size()-1];
        int secondMax=nums[nums.size()-2];
        int thirdMax=nums[nums.size()-3];
        int first=firstMin * secondMin * firstMax;
        int second=firstMax * secondMax * thirdMax;
        return max(first,second);
    }
};
