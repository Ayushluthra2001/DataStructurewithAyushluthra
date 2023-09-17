//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeStringEmpty(string s) {
        // code here
        stack<char>st;
        int count=0;
        int i=0;
        while(i<s.length()){
            while(i<s.length()  && s[i]!='k') {
                st.push(s[i]);
                i++;
            }
            
            if(i>=s.length()) return -1;
            i++;
            if(st.empty() || st.top()!='e') return -1;
            else st.pop();
            if(st.empty() || st.top()!='e') return -1;
            else st.pop();
            if(st.empty() || st.top()!='g') return -1;
            else st.pop();
            count++;
        }
        if(!st.empty()) return -1;
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        
        cin>>s;

        Solution ob;
        cout << ob.makeStringEmpty(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
