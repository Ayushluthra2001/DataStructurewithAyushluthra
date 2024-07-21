//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string reachAlice(int d, int x, int y, int k) {
        // code here
        
         x = d/x;
         y = d/y + k ;
        
        return x<=y ? "Walk"  : "Bike";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int d;
        scanf("%d", &d);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        int k;
        scanf("%d", &k);

        Solution obj;
        string res = obj.reachAlice(d, x, y, k);

        cout << res << "\n";
    }
}

// } Driver Code Ends
