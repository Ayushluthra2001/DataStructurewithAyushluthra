//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int startingrow=0;
        int startingcol=0;
        int endingrow=r-1;
        int endingcol=c-1;
        int total=r*c;
        int counter=0;
        vector<int>spiralview;
        while(counter<total){
            for(int index=startingcol; counter<total && index<=endingcol;index++){
                spiralview.push_back(matrix[startingrow][index]);
                counter++;
            }
            startingrow++;
            
            for(int index=startingrow; counter<total && index<=endingrow;index++){
                spiralview.push_back(matrix[index][endingcol]);
                counter++;
            }
            endingcol--;
            for(int index=endingcol;counter<total && index>=startingcol;index--){
                spiralview.push_back(matrix[endingrow][index]);
                counter++;
            }
            endingrow--;
            for(int index=endingrow;counter<total && index>=startingrow;index--){
                spiralview.push_back(matrix[index][startingcol]);
                counter++;
            }
            startingcol++;
            
        }
        return spiralview;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
