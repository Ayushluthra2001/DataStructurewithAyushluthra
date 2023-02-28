//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>ans;
        unordered_map<int,int>mapping;
        for(int i=0;i<k;i++){
            mapping[A[i]]++;
        }
        
        ans.push_back(mapping.size());
        for(int i=k;i<n;i++){
            mapping[A[i]]++;
            if(mapping[A[i-k]]==1){
                mapping.erase(A[i-k]);
            }else{
                mapping[A[i-k]]--;
            }
            // for(auto i : mapping){
            //     cout<<i.first<<" "<<i.second<<endl;
            // }
            ans.push_back(mapping.size());
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
