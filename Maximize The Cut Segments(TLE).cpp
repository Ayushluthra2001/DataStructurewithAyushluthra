//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int solve(int n , int x, int y , int z,int len ){
        if(len>n) return INT_MIN;
        if(len==n) return 0;
        int x1=1+solve(n,x,y,z,len+x);
        int x2=1+solve(n,x,y,z,len+y);
        int x3=1+solve(n,x,y,z,len+z);
        return max(x1,max(x2,x3));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int ans= solve(n,x,y,z,0);
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
