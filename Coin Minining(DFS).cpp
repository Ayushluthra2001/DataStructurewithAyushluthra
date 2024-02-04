//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>A[i][j];
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
  int solve(int i ,int j , vector<vector<int>>&grid,int N,vector<vector<int>>visited){
      if(i<0 || j<0 || i >=N || j>=N || grid[i][j]==0 || visited[i][j]==1 ) return 0;
      
      visited[i][j]=1;
      int up =solve(i-1,j,grid,N,visited);
      int down=solve(i+1,j,grid,N,visited);
      int left=solve(i,j-1,grid,N,visited);
      int right=solve(i,j+1,grid,N,visited);
      //cout<<left<<" "<<right<<" "<<down<<" "<<up<<endl;
      int ans=max(left,right);
      ans=max(ans,up);
      ans=max(ans,down);
      
      return ans+grid[i][j];
  }
    int maximumCoins(int N, vector<vector<int>> &grid) {
        // code here
        int maxi=0;
        vector<vector<int>>visited(N+1,vector<int>(N+1,0));
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if((i+j)%2!=0){
                   // cout<<"H"<<" ";
                    //cout<<i<<" "<<j<<endl;
                    
                    maxi=max(maxi,solve(i,j,grid,N,visited));
                    
                }
            }
        }
        return maxi;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<vector<int>> grid(N, vector<int>(N));
        Matrix::input(grid,N,N);
        
        Solution obj;
        int res = obj.maximumCoins(N, grid);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
