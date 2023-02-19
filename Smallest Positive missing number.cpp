//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) { 
        vector<bool>a(n+1,false);
        for(int i=0;i<n;i++){
            if(arr[i]<=n && arr[i]>=1){
                a[arr[i]-1]=true;
            }
        }
        
        for(int i=1;i<=n;i++){
            if(a[i-1]==false) return i;
        }
        return n+1;
    }
};

//{ Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        cout<<ob.findMissing(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
