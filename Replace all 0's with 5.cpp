//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int k=0;
    int d=1;
    
    while(n>0){
        if(n%10==0){
            k=d*5+k;
        }else{
           k=n%10*d+k;
        }
        d=d*10;
        n=n/10;
    }
    return k;
}
