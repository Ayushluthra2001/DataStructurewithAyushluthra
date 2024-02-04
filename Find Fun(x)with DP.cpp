//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


vector<long long>dp(100001,-1);
class Solution {
   
#define mod 1000000007
 
long long solve(long long n){
    if(n<0) return 0;
    
        if(n==0) return 2;
   
        if(n==1 ) return 5;
        if(n==2) return 9;
        if(n==3) return 7;
        if(dp[n]!=-1 ) return dp[n];
        long long curr=findFun(n)%mod;
        return dp[n]= curr%mod;
        
}
  public:
    int findFun(int n) {
        // code here
        
        if(n==0) return 2;
        if(n==1 ) return 5;
        if(n==2) return 9;
        if(n==3) return 7;
        
        if(n%2==0){
            //cout<<solve(n-2)<<endl;
            long long a=n-2;
            long long b=n-4;
            long long ans= solve(n-2)%mod*a%mod;
            long long ans2=solve(n-4)%mod*b%mod;
            //cout<<ans<<" "<<ans2<<endl;
            return ((ans%mod)+(ans2%mod))%mod;
        }else{
            long long a=(n-1)%mod;
            long long b=(n-3)%mod;
            long long ans= solve(n-1)%mod*a%mod;
            long long ans2=solve(n-3)%mod*b%mod;
            return ((ans%mod)+(ans2%mod))%mod;
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        int res = obj.findFun(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
