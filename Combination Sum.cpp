class Solution {
public:
    void solve(vector<int>& candidates , int target,int sum,vector<vector<int>>&ans,vector<int>&temp){
        if(sum>target){
            return ;
        }
        if(sum==target){
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            solve(candidates,target,sum+candidates[i],ans,temp);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(candidates,target,0,ans,temp);
        
        set<vector<int>>s;
        for(int i=0;i<ans.size();i++){
            sort(ans[i].begin(),ans[i].end());
            s.insert(ans[i]);
        }
        vector<vector<int>>unique_combination(s.begin(),s.end());
        
        return unique_combination;
    }
};
