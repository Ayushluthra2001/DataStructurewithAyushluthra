//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        vector<int>freq(26,0);
        for(int i=0;i<str.length();i++){
           // cout<<str[i]-'a'<<" ";
            freq[str[i]-'a']++;
        }
        int maxiOcc=0;
        char ans;
        
        for(int i=0;i<26;i++){
            //cout<<freq[i]<<" ";
            if(freq[i]>maxiOcc){
                maxiOcc=freq[i];
                ans='a'+i;
            }
        }
       
        
        return ans;
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
