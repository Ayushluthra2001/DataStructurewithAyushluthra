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
    int  solve(TreeNode* root,int &sum){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->val;
        int left=solve(root->left,sum);
        int right=solve(root->right,sum);
        if(left!=INT_MAX)
        sum+=left;
        
        
        return INT_MAX;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return 0;
        int sum=0;
        solve(root,sum);
        return sum;
    }
};
