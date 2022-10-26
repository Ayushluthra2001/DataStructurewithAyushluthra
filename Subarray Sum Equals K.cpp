class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int rem=0;
        int ans=0;
        map<int,int>mapping;
        mapping[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-k;
            if(mapping.find(sum-k)!=mapping.end()){
                ans+=mapping[sum-k];
            }
            if(mapping[sum]){
                mapping[sum]++;
            }else mapping[sum]=1;
        }
        return ans;
    }
};
