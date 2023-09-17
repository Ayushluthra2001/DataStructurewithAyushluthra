//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string solve(int A, int B) {
        // code here
        if(A%2==0 && B%2==0) return {"He"};
        else if(A%2!=0 && B%2!=0 ) return {"She"};
        return {"Punished"};
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {

        int A, B;
        cin >> A >> B;

        Solution ob;

        cout << ob.solve(A, B) << "\n";
    }
    return 0;
}

// } Driver Code Ends
