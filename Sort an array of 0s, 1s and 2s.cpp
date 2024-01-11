//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int countZero=0,countOne=0,countTwo=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                countZero++;
            }else if(a[i]==1){
                countOne++;
            }else countTwo++;
        }
        for(int i=0;i<n;i++){
            if(countZero-->0){
                a[i]=0;
            }else if(countOne-->0){
                a[i]=1;
            }else{
                a[i]=2;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
