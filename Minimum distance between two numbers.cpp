//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {

        int n1=0,n2=0,ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                n1=i+1;
            }
            else if(a[i]==y){
                n2=i+1;
            }

            if(n1>0 && n2>0){
                ans=min(ans,abs(n1-n2));
            }
        }
        if(n1==0 || n2==0){

            return -1;
        }
            return ans;
    }
        
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
