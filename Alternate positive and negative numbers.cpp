//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>positive;
	    vector<int>negative;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            positive.push_back(arr[i]);
	        }else{
	            negative.push_back(arr[i]);
	        }
	    }
	    bool flag=true;
	    int i=0;
	    int j=0;
	    int k=0;
	    while(k<n){
	        if(flag){
	            arr[k++]=positive[i++];
	            flag=!flag;
	        }else{
	            arr[k++]=negative[j++];
	            flag=!flag;
	        }
	    }
	    return ;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
