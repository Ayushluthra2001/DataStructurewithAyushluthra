//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void segragate012(int arr[], int N)
    {
        // Your Code Here
        int One=0,Two=0,Zero=0;
        for(int i=0;i<N;i++){
            if(arr[i]==0) Zero++;
            else if(arr[i]==1) One++;
            else Two++;
        }
        for(int i=0;i<N;i++){
            if(Zero>0){
                arr[i]=0;
                Zero--;
            }else if(One>0){
                arr[i]=1;
                One--;
            }else{
                arr[i]=2;
                Two--;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        Solution ob;
        ob.segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    }

}

// } Driver Code Ends
