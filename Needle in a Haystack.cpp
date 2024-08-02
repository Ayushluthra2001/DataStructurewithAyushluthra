//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
int NeedleinHaystack(string haystack, string needle) ;


// } Driver Code Ends
//User function Template for C++

int NeedleinHaystack(string haystack, string needle) 
{
    // Your code goes here 
    if(needle.length()==0) return 0;
    
    for(int i=0; i<haystack.length(); i++){
        
        if(haystack[i] == needle[0]){
            int j = 0;
            int a = i;
            
           
            
            while(a<haystack.length() && j<needle.length() && haystack[a] == needle[j]) a++,j++;
            
            if(j==needle.length()) return i;        
            
            
        }
       
        
    }
    return -1;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string haystack, needle;
        getline(cin,haystack);
        getline(cin,needle);
        cout<<NeedleinHaystack(haystack,needle)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
