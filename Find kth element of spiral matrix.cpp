//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		 vector<int>ans;
        
        int total = n* m;
        int count=0;
        int toprow =0;
        int topcol =0;
        int endcol =m-1;
        int endrow =n-1;
        while(count<total){
            
            
            for(int i=topcol;i<=endcol;i++ ){
                ans.push_back(matrix[toprow][i]);
                count++;
            }
            toprow++;
             if(count>=total)  break;
            for(int i=toprow;i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
             if(count>=total)  break;
            for(int i=endcol;i>=topcol;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
             if(count>=total)  break;
            for(int i=endrow;i>=toprow;i--){
                ans.push_back(matrix[i][topcol]);
                count++;
                
            }
            topcol++;
            if(count>=total)  break;
        }
 		 
 		 return ans[k-1];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
