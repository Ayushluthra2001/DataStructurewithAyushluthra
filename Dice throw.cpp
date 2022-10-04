//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long solve(int N,int M, int target,vector<vector<long long >>&dp){
      if(target<0) return 0;
      if(N==0 && target!=0) return 0;
      if(target==0 && N!=0) return 0;
      if(N==0 && target==0) return 1;
      if(dp[N][target]!=-1) return dp[N][target];
      long long  ways=0;
      for(int i=1;i<=M;i++){
          ways+=solve(N-1,M,target-i,dp);
      }
      
      return dp[N][target]=ways;
  }
    long long noOfWays(int M , int N , int X) {
        // code here
        vector<vector<long long >>dp(N+1,vector<long long>(X+1,-1));
        return solve(N,M,X,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends
