//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string encode(string s) {
        // code here
        string ans = "";
        
        int i = 0;
        int n = s.length();
        
        while(i < n){
            int j = i+1;
            
            int count = 1;
            while(j < n && s[i] == s[j]) j++,count++;
            
            ans += s[i]; 
            ans += to_string(count);
            i = j;
        }
        
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends
