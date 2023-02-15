//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code her
    int s=0,e=n-1;
    int index=-1;
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==0){
            s=mid+1;
            index=mid;
        }else if(arr[mid]==1){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-e)/2;
    }
    if(index==-1) return 0;
    if(index==n-1) return -1;
    
    
    return index+1;
}
