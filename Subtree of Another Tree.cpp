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

    bool checkBothAreSameOrNot(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL || root2 == NULL) return root1 == root2;
        if(root1 -> val != root2 -> val) return false;

       bool left  =  checkBothAreSameOrNot(root1->left, root2->left);
       bool right = checkBothAreSameOrNot(root1->right, root2->right);
       return left && right;
    }
    
    void findNode(TreeNode* root ,TreeNode* subRoot,bool& ans){
        if(root == NULL) return ;
        findNode(root->left, subRoot,ans);
        if(root->val == subRoot->val){
            ans = ans || checkBothAreSameOrNot(root,subRoot);
        }
        findNode(root->right,subRoot,ans);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans = false;
        
        findNode(root,subRoot,ans);
      
        
        return ans;
    }
};
