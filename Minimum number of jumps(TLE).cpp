//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of jumps to reach the end of the array.
    
    int solve(int arr[],int n,int curr){
        if(curr>=n-1) return 0;
        if(arr[curr] == 0) return INT_MAX;
        
        int mini = INT_MAX;
        for(int i=1;i<=arr[curr];i++){
            int x  =solve(arr,n,curr+i);
            if(x != INT_MAX) mini = min(mini,1+x);
        }
        
        return mini;
    }
    int minimumJumps(int arr[], int n){
        
        // your code here
    
        
        int ans =  solve(arr,n,0) ;
        return ans ==INT_MAX ? -1 : ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minimumJumps(arr, n)<<endl;    // Function to calculate minimum number of jumps
    }
    return 0;
}
// } Driver Code Ends
