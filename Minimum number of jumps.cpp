//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    // Function to find minimum number of jumps to reach the end of the array.
    int minimumJumps(int arr[], int n) {
        if (n <= 1) return 0; 

        if (arr[0] == 0) return -1; 
        
        int jumps = 0; 
        int currEnd = 0; 
        int farthest = 0; 
        
        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + arr[i]);
            
            if (i == currEnd) {
                jumps++;
                currEnd = farthest; 
                
                if (currEnd >= n - 1) break; 
            }
        }
        
        return currEnd >= n - 1 ? jumps : -1; 
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
