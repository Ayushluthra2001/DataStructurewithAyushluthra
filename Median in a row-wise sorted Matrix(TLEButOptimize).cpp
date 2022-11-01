//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here       
        priority_queue<int>pq;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                pq.push(matrix[i][j]);
            }
        }
        
        int n=pq.size();
        int k=n/2;
        
       
        while(n>k+1){
            pq.pop();
            n--;
        }
        return pq.top();
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends
