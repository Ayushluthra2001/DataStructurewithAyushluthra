//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    
    #define mod 1000000007
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long solve(int n,int curr,vector<long long >&dp){
        if(curr==n) return 1;
        if(curr>n) return 0;
        if(dp[curr]!=-1) return dp[curr];
        long long  one = solve(n,curr+1,dp)%mod;
        long long second=solve(n,curr+2,dp)%mod;
        long long third=solve(n,curr+3,dp)%mod;
          dp[curr]=(one+second+third)%mod;
         return dp[curr];
    }
    long long countWays(int n)
    {
        
        // your code here
        vector<long long >dp(n,-1);
        return solve(n,0,dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
