//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string>ans;
        int i=0;
        while(i<S.length()){
            int j=i;
            string temp="";
            while(j<S.length() && S[j]!='.'){
                temp+=S[j];
                j++;
            }
            if(temp.size()>=1){
                ans.push_back(temp);
            }
            j++;
            i=j;
        }
        reverse(ans.begin(),ans.end());
        S="";
        for(int i=0;i<ans.size();i++){
            S+=ans[i]+".";
        }
        S.pop_back();
        return S;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
