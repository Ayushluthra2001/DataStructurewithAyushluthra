//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int solve(int n , int x, int y , int z,int len,vector<int>&dp ){
        if(len>n) return INT_MIN;
        if(len==n) return 0;
        if(dp[len]!=-1) return dp[len];
        int x1=1+solve(n,x,y,z,len+x,dp);
        int x2=1+solve(n,x,y,z,len+y,dp);
        int x3=1+solve(n,x,y,z,len+z,dp);
        return dp[len]=max(x1,max(x2,x3));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>dp(n+1,-1);
        int ans= solve(n,x,y,z,0,dp);
        if(ans<0) return 0;
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
