//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;


// } Driver Code Ends
// function to find longest common subsequence

class Solution {
  public:
    // Function to find the length of longest common subsequence in two strings.
     int solve(string &str1,string &str2,int i, int j){
            
        if(i>=str1.length() || j>=str2.length()) return 0;
       
        if(str1[i] == str2[j]){
          return 1+ solve(str1,str2,i+1,j+1);
            
        }else{
            int notInclude1 = solve(str1,str2,i,j+1);
            int notInclude2 = solve(str1,str2,i+1,j);
            
            return max(notInclude1,notInclude2);
        }
        
        return -1; 
    }
    int lcs(int n, int m, string str1, string str2) {
        // your code here
        
        return solve(str1,str2,0,0);
    }
};


//{ Driver Code Starts.
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m; // Take size of both the strings as input
        string str1, str2;
        cin >> str1 >> str2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
    }
    return 0;
}

// } Driver Code Ends
