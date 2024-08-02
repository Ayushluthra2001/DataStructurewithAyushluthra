//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.

    string rotateRight(string temp){
        string ans = temp;
        
        int n = temp.size();
        
        for(int i=0; i<n; i++){
            
            ans[(i+2)%n] = temp[i];
        }
        
        return ans;
    }
    string rotateLeft(string temp){
        string ans = temp;
        
        int n = temp.size();
        
        for(int i=0; i<n; i++){
            
            ans[(i-2+n)%n] = temp[i];
        }
        
        return ans;
    }
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string left  = rotateLeft(str2);
        string right = rotateRight(str2);
        
        //cout<<left<<" "<<right<<" "<<endl;
        if(left == str1 || right == str1) return true;
        
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
