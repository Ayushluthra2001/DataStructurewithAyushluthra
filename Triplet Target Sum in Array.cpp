//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        // Your Code Here
         int target = x;
            sort(arr,arr+n);
            int start = 0;
            int end   = n-1;
            
            
            for(int i=0;i<n;i++){
                
                int start = i+1;
                int end = n-1;
                while(start < end){
                    int curr =arr[i] + arr[start]  + arr[end];
                    
                    if(curr == target) return true ;
                    else if(curr > target) end --;
                    else start++;
                }
            }
            
        
        
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
