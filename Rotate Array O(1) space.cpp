//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    void reverse(int arr[],int d, int n){
        int s=0,e=d-1;
        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        return ;
    }
    void reverse2(int arr[],int d, int n){
        int s=d,e=n-1;
        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        return ;
    }
    void reverse(int arr[], int n){
        int s=0,e=n-1;
        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        return ;
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        if(d>n){
            d=d%n;
        }
       reverse(arr,d,n);
      
      
       reverse2(arr,d,n);
       
       
       reverse(arr,n);
    }

};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends
