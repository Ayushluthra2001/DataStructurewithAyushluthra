class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>left,right;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            left.push_back(sum);
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
            right.push_back(sum);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<left.size();i++){
            if(right[i]==left[i])return i;
        }
    return -1;
    }
};
