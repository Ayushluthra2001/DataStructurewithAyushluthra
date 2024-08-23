//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

int solve(int n , int arr[] , int currIndex , int prev , vector<vector<int>>&dp){
    if(currIndex >=n) return 0;
    
    if(dp[currIndex][prev] != -1) return dp[currIndex][prev];
    int pic = 0 , notPick = 0;
    
    if(prev == 0){
        pic = arr[currIndex] + solve(n , arr, currIndex + 1, 1 ,dp);
    }
    notPick =  solve(n , arr, currIndex + 1 , 0 ,dp);
    return dp[currIndex][prev] = max(pic , notPick);
}
int maxPizza(int n , int arr[])
{
    // code here.
    vector<vector<int>>dp(n,vector<int>(2,-1));
    return solve(n, arr, 0 , 0,dp);
}

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , ans;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        	cin>>arr[i];
        
        ans = maxPizza(n,arr);
        
        cout<<ans<<endl;
    }
		
}



// } Driver Code Ends
