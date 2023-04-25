//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Complete this function



class Solution
{
    public:
    //Function to find the minimum number of coins to make the change 
    //for value using the coins of given denominations.
    long long solve(int coins[],int numberOfCoins,int val,int curr){
        if(curr>val) return 1e8;
        if(curr==val) return 0;
        long long  mini=INT_MAX;
        for(int i=0;i<numberOfCoins;i++){
            mini=min(mini,1+solve(coins,numberOfCoins,val,curr+coins[i]));
        }
        return mini;
    }
    long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
    {
        // your code here
        int ans=solve(coins,numberOfCoins,value,0);
        if(ans>=1e8) return -1;
        return ans;
    }
};

//{ Driver Code Starts.



int main() {
	
	//taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //taking value of each coin
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function minimumNumberOfCoins()
	    int answer=obj.minimumNumberOfCoins(coins,numberOfCoins,value);
	    
	    //printing "Not Possible" if answer is -1
	    //else printing answer
	    if(answer==-1)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends
