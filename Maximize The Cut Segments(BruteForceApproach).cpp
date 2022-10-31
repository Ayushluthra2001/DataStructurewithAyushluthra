//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int solve(int n, int x, int y,int z){
        if(n==0) return 0;
        if(n<0) return -INT_MAX;
        int first=1+solve(n-x,x,y,z);
        int second=1+solve(n-y,x,y,z);
        int third=1+solve(n-z,x,y,z);
        return max(first,max(second,third));
        
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        return solve(n,x,y,z);
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
