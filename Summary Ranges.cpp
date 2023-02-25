class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            long long currMin=nums[i];
            long long start=nums[i];
            while(j<nums.size()){
                if(nums[j]-start==1){
                    start=nums[j];
                    j++;
                }
                else break;
            }
            int currMax=nums[j-1];
            if(currMin==currMax){
                ans.push_back(to_string(currMin));
            }else{
                string temp="";
                temp+=to_string(currMin)+"->"+to_string(currMax);
                ans.push_back(temp);
            }
            i=j;
        }
        return ans;
    }
};
