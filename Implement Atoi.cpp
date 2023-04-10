//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans=0;
        int neg=0;
        for(int i=0;i<str.length();i++){
            if(isdigit(str[i])){
                ans=ans*10+str[i]-'0';
                
            }else if(str[i]=='-') {
                neg++;
                if(i>=1){
                    return -1;
                }
            }
            else return -1;
        }
        if(neg%2!=0) ans=-1*ans;
        return ans;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
