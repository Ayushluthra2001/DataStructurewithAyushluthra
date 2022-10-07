//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private: 
    bool solve(int index,int target, int arr[], int N, int sum){
        if(index>=N) return false ;
        if(sum>target) return false;
        if(sum==target) return true;
        bool take=solve(index+1,target,arr,N,sum+arr[index]);
        bool nottake=solve(index+1,target,arr,N,sum);
        return (take || nottake);
    }
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0) return false;
        int target=sum/2;
        return solve(0,target,arr,N,0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
