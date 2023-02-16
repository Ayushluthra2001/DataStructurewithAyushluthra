//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int index=-1;
        int left = 0, right = n - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
    
        
            if (a[mid] == b[mid])
                left = mid + 1;
    
           
            else
            {
                index = mid;
                right = mid - 1;
            }
        }


    return index;
                
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends
