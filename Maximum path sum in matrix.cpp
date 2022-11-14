//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(int startingrow,int startingcol,vector<vector<int>>&matrix,int endingcol,int endingrow,int &maxi,int currsum){
        if(startingrow==endingrow-1){
            maxi=max(maxi,currsum+matrix[startingrow][startingcol]);
            return ;
        }

        if(startingrow+1<endingrow)
        solve(startingrow+1,startingcol,matrix,endingcol,endingrow,maxi,currsum+matrix[startingrow][startingcol]);
        if(startingcol-1>=0 && startingrow+1<endingrow)
        solve(startingrow+1,startingcol-1,matrix,endingcol,endingrow,maxi,currsum+matrix[startingrow][startingcol]);
        if(startingrow+1<endingrow && startingcol+1<endingcol)
        solve(startingrow+1,startingcol+1,matrix,endingcol,endingrow,maxi,currsum+matrix[startingrow][startingcol]);
    } 
    int maximumPath(int N, vector<vector<int>> matrix)
    {
        int row=matrix.size();
        int col=matrix[0].size();
        int maxi=0;
        for(int i=0;i<col;i++){
            solve(0,i,matrix,row,col,maxi,0);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
