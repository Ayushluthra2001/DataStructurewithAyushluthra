//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

string find(string s);

//Your code will be place here

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int x;
	    cin >> x;
	    string s;
	    cin >> s;
	    int h[26];
	    
	    cout << find(s) << "\n";
	    
	}
	
	return 0;
}
// } Driver Code Ends


//User function template for C++

// return the first non-repeating char in S.
// if there's no non-repeating char, return "-1"
string find(string S) {
    vector<int>count(26,0);
    string ans="";
    int mini=INT_MAX;
    for(int i=0;i<S.length();i++){
        count[S[i]-'a']++;
    }
    for(int i=0;i<S.length();i++){
        if(count[S[i]-'a']==1){
          ans=ans+S[i];
          return ans;
        }
    }
    return "-1";
}
