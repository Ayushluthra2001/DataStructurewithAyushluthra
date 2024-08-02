//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    void mergedSortedArray(vector<int>&arr1,vector<int>&arr2,vector<int>&mergedArray){
        int i = 0;
        int j = 0;
        int n = arr1.size();
        int m = arr2.size();
        
        while(i<n  && j<m){
            if(arr1[i] >= arr2[j]){
                mergedArray.push_back(arr2[j++]);
            }else{
                mergedArray.push_back(arr1[i++]);
            }
        }
        while(i<n){
            mergedArray.push_back(arr1[i++]);
        }
        while(j<m){
            mergedArray.push_back(arr2[j++]);
        }
        return ;
    }
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        double ans = 0;
        
        vector<int>mergedArray;
        
        mergedSortedArray(array1,array2,mergedArray);
        
        int size = mergedArray.size();
        if(size % 2 == 0){
                double first  = mergedArray[(size/2)] ;
                double second = mergedArray[(size/2)-1];
                ans = (first + second) /2;
        }else{
            ans = mergedArray[size/2];
        }
        
        
        return ans;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
