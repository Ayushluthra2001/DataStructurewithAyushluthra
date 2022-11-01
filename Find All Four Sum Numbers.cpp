//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>>quadsum;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int start=j+1;
                int end=arr.size()-1;
                int remsum=k-arr[i]-arr[j];
                while(start<end){
                    if(arr[start]+arr[end]<remsum) start++;
                    else if(arr[start]+arr[end]>remsum)end--;
                    else{
                            
                            vector<int>ans(4,0);
                            ans[0]=arr[i];
                            ans[1]=arr[j];
                            ans[2]=arr[start];
                            ans[3]=arr[end];
                            quadsum.push_back(ans);
                        while(start<end && arr[start]==ans[2]) start++;
                        while(start<end && arr[end]==ans[3]) end--;
                    }
                    
                }
                while(j+1 <n && arr[j+1]==arr[j]) j++;
            }
            while(i+1 <n && arr[i+1]==arr[i]) i++;
            
        }
        return quadsum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
