//{ Driver Code Starts
//Initial Template for C++

#include "bits/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    vector<int> frequency(int n, vector<int> &a){
        // Write your code here
        unordered_map<int,int>mapping;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            mapping[a[i]]++;
            ans.push_back(mapping[a[i]]);
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        vector<int>ans=ob.frequency(n, a);
        for(auto it:ans)
            cout<<it<<" ";
        cout<<endl;
    }
}
// } Driver Code Ends
