class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int ans=0;
        unordered_map<int,int>mapping;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i]-difference;
            int tempans=0;
            if(mapping.count(temp))
                tempans+=mapping[temp];
            
            mapping[arr[i]]=1+tempans;
            
            ans=max(ans,mapping[arr[i]]);
        }
        return ans;
    }
};
