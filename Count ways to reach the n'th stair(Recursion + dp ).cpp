//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    #define mod 1000000007
    int solve(int n , int curr,vector<int>&dp){
        if(curr>n)return 0;
        if(curr==n) return 1;
        if(dp[curr]!=-1) return dp[curr];
        int first=solve(n,curr+1,dp);
        int second=solve(n,curr+2,dp);
       
        return dp[curr]=(first+second)%mod;
    }
    int countWays(int n)
    {
        // your code here
        vector<int>dp(n+1,-1);
        return solve(n,0,dp);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends
