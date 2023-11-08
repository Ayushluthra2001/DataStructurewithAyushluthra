class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1;i<intervals.size();i++){
            int last=ans[ans.size()-1][1];
            int curr=intervals[i][0];
            int maxi=max(last,intervals[i][1]);
            if(last>=curr){
                int f=ans[ans.size()-1][0];
                ans.pop_back();
                ans.push_back({f,maxi});
            }else {
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return ans;
    }
};
