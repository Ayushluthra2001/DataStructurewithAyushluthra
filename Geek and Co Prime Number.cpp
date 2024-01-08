//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    long long sum(long long N, long long M){
        // code here
        
        long long g=__gcd(N,M);
        return N/g + M/g;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        long long N, M;
        cin >> N >> M;
        Solution obj;
        cout << obj.sum(N, M) << "\n";
    }
}

// } Driver Code Ends
