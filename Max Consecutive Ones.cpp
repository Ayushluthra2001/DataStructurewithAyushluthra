class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int maxi=0;
        int countOne=0;
        while(i<nums.size()){   
            if(nums[i]==1) countOne++;
            else{
                maxi=max(maxi,countOne);
                countOne=0;
            }
            i++;
        }
        maxi=max(maxi,countOne);
        return maxi;
    }
};
