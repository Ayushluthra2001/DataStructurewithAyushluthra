//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int i=0;
        int maxi=0;
        
        while(i<n){
            int j=i;
            int k=m;
            int count=0;
            while(j<n &&k>=0 ){
                if(k==0  && arr[j]==0){
                    break;
                }
                 if(arr[j]==1){
                    count++;
                }
                else if(arr[j]==0 && k>0){
                    k--;
                    count++;
                }
                j++;
                
            
    
            }
            maxi=max(maxi,count);
            i++;
        }
        return maxi;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
