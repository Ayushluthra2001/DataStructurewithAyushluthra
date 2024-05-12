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
int strstr(string s, string x)
{
     //Your code here
     
     
     
     for(int i=0; i<s.length(); i++){
         int count=0;
         
         if(s[i] == x[0]){
             for(int j=0,k=i; k<s.length() && j<x.length(); j++,k++ ){
                 if(s[k] == x[j]) count++;
             }
             if(count == x.length()) return i;
         }
     }
     return -1;
}
