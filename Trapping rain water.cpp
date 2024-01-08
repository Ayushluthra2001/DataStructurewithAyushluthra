//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
    int total=0;
    vector<int>left(n,0);
    vector<int>right(n,0);
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        left[i]=maxi;
        
    } maxi=0;
    for(int i=n-1;i>=0;i--){
        maxi=max(maxi,arr[i]);
        right[i]=maxi;
        
    }
    for(int i=0;i<n;i++){
       int  mini=min(left[i],right[i]);
       if(mini>=arr[i])
        total+=mini-arr[i];
        
    }
    return total;
    
}

//{ Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
