//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int maxSubArray( vector<int> array);

//User code will be pasted here

int main()
{
    int t;
    cin>>t; //input testcases
    
    while(t--) //while testcases exist
    {
        int n;
        cin>>n; //input size of array
        vector<int> vec(n);
        
        for(int i=0; i<n; i++)
            cin>>vec[i]; //inputting elements of array
            
        cout << maxSubArray(vec) << "\n";
    }
}

// } Driver Code Ends


//User function template for C++


int maxSubArray(vector<int> array) {
    // code here      \
    
    int maxSum = INT_MIN;
    
    int sum =0;
    for(int i=0; i<array.size();i++){
        sum += array[i];
        
        maxSum = max(maxSum , sum);
        if(sum < 0) sum =0;
        
        
    }
    return maxSum;
}
