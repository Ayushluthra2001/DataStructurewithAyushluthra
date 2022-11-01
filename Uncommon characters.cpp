//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            int mapping[26]={0},mapping2[26]={};
            for(int i=0;i<A.length();i++){
                mapping[A[i]-'a']++;
            }
            for(int i=0;i<B.length();i++){
                mapping2[B[i]-'a']++;
            }
            string ans="";
            for(int i=0;i<26;i++){
                if(mapping[i]>=1 && mapping2[i]==0 || mapping[i]==0 && mapping2[i]>=1)
                ans+=i+'a';
            }
            
            return ans==""?"-1":ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
