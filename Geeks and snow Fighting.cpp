//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int snowball(int N, vector<int> weights){
        // code here
        int sum=0;
        for(auto i : weights){
            sum+=i;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> weights(N);
        for(int i = 0; i < N; i++){
            cin >> weights[i];
        }
        Solution obj;
        cout << obj.snowball(N, weights) << "\n";
    }
}

// } Driver Code Ends
