//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
           //Your Code Here
           unordered_map<int,int>mapping;
           for(int i =0;i<n;i++){
               mapping[A[i]]++;
           }
           
           for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    int sum=A[i]+A[j];
                    int rem=X-sum;
                    if(mapping.find(rem)!=mapping.end()){
                        int count=mapping[rem];
                        // cout<<A[i]<<" "<<A[j]<<" "<<count<<" "<<rem<<endl;
                        if(A[i]==rem) count--;
                        if(A[j]==rem) count--;
                        
                        if(count>=1) return true;
                    }
                }    
           }
           return false;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
