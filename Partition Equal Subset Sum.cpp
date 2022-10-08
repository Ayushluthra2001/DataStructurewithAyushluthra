class Solution{
    public:
    bool canPartition(vector<int>& arr) {
        int sum=0;
        int N=arr.size();
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0) return false;
        int target=sum/2;
        vector<vector<int>>dp(N+1,vector<int>(target+1,0));
        for(int i=0;i<=N;i++){
            dp[i][0]=1;
            
        }
        
        for(int index=N-1;index>=0;index--){
            for(int target=0;target<=sum/2;target++){
                bool take=0;
                if(target-arr[index]>=0 )
                     take=dp[index+1][target-arr[index]];
                
                     bool nottake=dp[index+1][target];
                     dp[index][target]=(take || nottake);        
            }
        }
       return dp[0][sum/2];                         
    }
};
