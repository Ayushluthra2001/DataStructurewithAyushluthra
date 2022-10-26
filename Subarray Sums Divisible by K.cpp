class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        int rem=0;
        map<int,int>mapping;
        mapping.insert({0,1});
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            if(mapping.find(rem)!=mapping.end()){
                ans+=mapping[rem];
                
            }
            if(mapping[rem]){
                mapping[rem]++;
            }else mapping[rem]=1;
        }
        return ans;
    }
};
