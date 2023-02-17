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
    void inorder(vector<int>& ans, TreeNode*  root){
        if(root==NULL) return ;
        inorder(ans,root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        inorder(ans,root);
        int mini=INT_MAX;
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                mini=min(mini,abs(ans[i]-ans[j]));
            }
        }
        return mini;
    }
};
