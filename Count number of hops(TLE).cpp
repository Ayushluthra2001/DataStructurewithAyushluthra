//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    
    #define mod 1000000007
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long solve(int n,int curr){
        if(curr==n) return 1;
        if(curr>n) return 0;
        
        int one = solve(n,curr+1)%mod;
        int second=solve(n,curr+2)%mod;
        int third=solve(n,curr+3)%mod;
        return (one+second+third)%mod;
    }
    long long countWays(int n)
    {
        
        // your code here
        return solve(n,0);
        
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
