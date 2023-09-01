//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i=0;
        int j=0;
        vector<int>ans;
        int prev=-1;
        while(i<n && j<m){
            while(i<n && prev==arr1[i]) i++;
            while(j<m && prev==arr2[j]) j++;
            if(i>=n || j>=m) break;
          //  cout<<prev<<endl;
           
                if(arr1[i]>=arr2[j]){
                    prev=arr2[j];
                    ans.push_back(arr2[j++]);
                    
                }else{
                    prev=arr1[i];
                    ans.push_back(arr1[i++]);
                   
                }
            
            
            
        }
        //cout<<prev<<endl;
        //cout<<i<<" "<<j<<" "<<prev<<endl;
        while(i<n){
            //cout<<"yes"<<endl;
            if(prev!=arr1[i]) {
                ans.push_back(arr1[i]);
                prev=arr1[i];
                i++;
            }else i++;
        }
         while(j<m ){
            if(prev!=arr2[j]) {
                ans.push_back(arr2[j]);
                prev=arr2[j];
                j++;
            }else j++;
        }
        return ans;
    }
   
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
