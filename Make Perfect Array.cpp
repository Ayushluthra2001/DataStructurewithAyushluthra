//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int makePerfect(int n, vector<int> &arr) {
        // code here
        //sort(arr.begin(),arr.end());
        int ans = 0;
        int i = 0;
        while(i < arr.size()){
            int j = i+1;
            int count = 1;
            while(j<arr.size() && arr[i] == arr[j]) count++ ,j++;
            ans+= count/2;
            i = j;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.makePerfect(n, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends
