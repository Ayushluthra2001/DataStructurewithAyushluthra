//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        int prev=arr[0];
        vector<int>ans;
        vector<bool>vis(n+1,0);
        ans.push_back(arr[0]);
        vis[arr[0]]=true;
        for(int i=1;i<n;i++){
            if(prev!=arr[i] && !vis[arr[i]]){
                ans.push_back(arr[i]);
                prev=arr[i];
                vis[arr[i]]=true;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}

// } Driver Code Ends
