//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long findGoodPairs(vector<int> a, int n, int k) {
        // code here
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=k+i;j<n;j++){
                if(a[i]==a[j])count++;
            }
            
        }
        return count;
    }
};

//{ Driver Code Starts.


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];


        Solution ob;
        cout << ob.findGoodPairs(a, n, k) << "\n";
    }
    return 0;
}

// } Driver Code Ends
