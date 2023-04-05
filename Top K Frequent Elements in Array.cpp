//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        sort(nums.begin(),nums.end());
        vector<pair<int,int>>pairs;
        vector<int>ans;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            int count=1;
            while(j<nums.size() && nums[j]==nums[i]) {
                count++;;
                j++;
            }
            pairs.push_back({count,nums[i]});
            i=j;
        }
        // for(auto i : pairs){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        sort(pairs.begin(),pairs.end());
        reverse(pairs.begin(),pairs.end());
        // for(auto i : pairs){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for(int i=0;i<k && i<pairs.size();i++){
            ans.push_back(pairs[i].second);
        }
       
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
