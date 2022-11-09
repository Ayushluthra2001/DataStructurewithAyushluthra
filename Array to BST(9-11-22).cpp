// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
void bst(int s,int e, vector<int>& nums , vector<int>&ans)
{
    if(s>e)
    {
        return ;
    }
    int mid=s+(e-s)/2;
    ans.push_back(nums[mid]);
     bst(s,mid-1,nums,ans);
     bst(mid+1,e,nums,ans);
    
    return;
    
    
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        vector<int>ans;
        bst(s,e,nums,ans);
        return ans;
        
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
