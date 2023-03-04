//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        unordered_map<int,int>mapping;
        map<int,int>mapping2;
        
        for(int i=0;i<N;i++){
            mapping[A1[i]]++;
        }
        
        vector<int>ans;
        vector<int>temp;
        for(int i=0;i<A2.size();i++) mapping2[A2[i]]++;
        for(int i=0;i<A1.size();i++){
            if(mapping2[A1[i]]==0) temp.push_back(A1[i]);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<M;i++){
            int occ=mapping[A2[i]];
            if(occ>0){
                for(int j=0;j<occ;j++){
                    ans.push_back(A2[i]);
                }
            }
        }
        for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i]);
        }
        return ans;
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends
