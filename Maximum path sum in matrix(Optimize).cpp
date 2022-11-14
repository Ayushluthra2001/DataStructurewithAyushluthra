//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> M){
    int dp[N][N] = {{0}};
    
    for(int i = N-1; i >= 0; i--){
        for(int j = 0; j < N; j++){
            
            if(i == N-1)
                dp[i][j] = M[i][j];
            
            else if(j == 0)
                dp[i][j] = M[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
                
            else if(j == N-1)
                dp[i][j] = M[i][j] + max(dp[i+1][j], dp[i+1][j-1]);
                
            else
                dp[i][j] = M[i][j] + max(dp[i+1][j], max(dp[i+1][j-1], dp[i+1][j+1]));
        }
    }
    
    int res = dp[0][0];
    for(int i = 0; i < N; i++)
        res = max(res, dp[0][i]);
        
    return res;
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
