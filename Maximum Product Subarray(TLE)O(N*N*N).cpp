class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
       for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            int product=1;
            for(int k=i;k<=j;k++){
                product*=nums[k];
            }
            maxi=max(maxi,product);
        }
       } 
       return maxi;
    }
};
