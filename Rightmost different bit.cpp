//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        vector<int>first;
        vector<int>second;
        while(m>0){
            first.push_back(m%2);
            m=m/2;
        }
        while(n>0){
            second.push_back(n%2);
            n=n/2;
        }
        
        
        int maxi= max(first.size() , second.size());
        
        while(first.size()<maxi){
            first.push_back(0);
        }
        while(second.size()<maxi){
            second.push_back(0);
        }
        
        
        for(int i=0;i<max(first.size(),second.size());i++){
            if(i==first.size()) return i+1;
            if(i==second.size()) return i+1;
            if(first[i]!=second[i]) return i+1;
        }
        return -1;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends
