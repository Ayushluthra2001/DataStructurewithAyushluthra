//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int solve(int arr[],int curr, int n,int prev,vector<vector<int>>&dp){
	    if(curr==n) return 0;
	    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
	    int notake=solve(arr,curr+1,n,prev,dp);
	    int take=0;
	    if(prev==-1 || arr[curr]>arr[prev]){
	       
	        take=solve(arr,curr+1,n,curr,dp)+arr[curr];
	    }
	    return dp[curr][prev+1]=max(take,notake);
	}
	int maxSumIS(int arr[], int n)  
	{  
	    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
	    
	    int prev=-1;
	    
	    return solve(arr,0,n,prev,dp); 
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
