//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
// ababaaaaaa abaa start 0
    //   i
    //           j
   
             
// abcabcabcd abcd start=0;
// i
//           j
int strstr(string s, string x)
{
     //Your code here
     int j,k;
     for(int i=0;i<s.length();i++){
         int start=i;
         j=0;
          k=i;
             while(j<x.length() && s[k]==x[j]) {
                 k++;
                 j++;
             }
             if(j==x.length()) return start;
             
     }
         
     return -1;
}
