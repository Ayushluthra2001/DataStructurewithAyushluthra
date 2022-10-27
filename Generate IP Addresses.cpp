//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
     bool valid(string s){
        int n = s.size(),x= stoi(s);
        if(n==0 || n>3 || (s[0]=='0' && n>1) || x>255 ) return false;
        return true;
    }
    
    vector<string> genIp(string &s) {
       int n = s.size();
       if(n > 12 || n < 4 ) return {"-1"};
       
       vector<string> v;
       for(int i=1;i<n-2;i++) for(int j=i+1;j<n-1;j++) for(int k=j+1; k<n;k++)
        {
                   string a(s.begin(), s.begin() + i);
                   string b(s.begin()+i, s.begin() + j);
                   string c(s.begin()+j, s.begin() + k);
                   string d(s.begin()+k, s.end());
                   if(valid(a) && valid(b) && valid(c) && valid(d))
                        v.push_back((a+"."+b+"."+c+"."+d));
       }
       return v;  
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends
