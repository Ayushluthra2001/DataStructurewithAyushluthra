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
    void inorder(TreeNode * root, string &s){
        if(root==NULL) return ;
        inorder(root->left,s);
        if(root->left==NULL && root->right==NULL) s+=to_string(root->val)+"*";
        inorder(root->right,s);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1="",s2="";
        inorder(root1,s1);
        inorder(root2,s2);
        if(s1.length()!=s2.length()) return false;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]) return false;
        }
        return true;
    }
};
