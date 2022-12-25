//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void precompute()
    {
        // Code Here
    }
    bool is_three(long long n){
        int count=0;
        while(n>0){
            if(n%2==1) count++;
            n=n/2;
        }
        if(count==3) return true;
        return false;
    }
    
    
    long long solve(long long l, long long r){
        // Code Here
        int count=0;
        while(l<=r){
            if(is_three(l)) count++;
            l++;
        }
        return count;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends
