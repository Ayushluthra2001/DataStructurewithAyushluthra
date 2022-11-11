class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        vector<long long > pre(nums.size(),0);
        
        pre[0]=nums[0];
        
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        
        set<int> s;
    
        int j=0;
        long long ans=0;
        
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                while(nums[j]!=nums[i]){
                    s.erase(nums[j++]);
                }
                s.erase(nums[j++]);
                s.insert(nums[i]);
            }
            else {
                s.insert(nums[i]);
                if(i-j+1==k){
                    if(j-1>=0){
                        ans=max(ans,pre[i]-pre[j-1]);
                    }
                    else{
                        ans=max(ans,pre[i]);
                    }
                    s.erase(nums[j++]);
                }
                
            }
        }
        
        return ans;
        
    }
};
