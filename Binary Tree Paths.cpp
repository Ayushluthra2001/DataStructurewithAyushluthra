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
    void solve(string temp, vector<string>&ans, TreeNode* root){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL){
           if(temp.length()>0){
            temp+='-';
            temp+='>';
        }
            temp+=to_string(root->val);
            ans.push_back(temp);
            return ;
        }
        if(temp.length()>0){
            temp+='-';
            temp+='>';
        }
         
         temp+=to_string(root->val);
         solve(temp,ans,root->left);
         solve(temp,ans,root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string temp="";
        solve(temp,ans,root);    
        return ans;
    }
};
