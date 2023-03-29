/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,vector<int>&ans){
        if(root==NULL) return ;
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        sort(ans.begin(),ans.end());
        if(ans.size()==1) return -1;
        if(ans.size()==2) return ans[0]==ans[1] ? -1 : ans[1];
        int mini=ans[0];
        for(int i=1;i<ans.size();i++){
            if(mini!=ans[i]) return ans[i];
        }
        return -1;
    }
};
