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
    TreeNode* solve(TreeNode* root1 , TreeNode* root2 ){
        
        if(root1==NULL && root2==NULL ) return NULL;
        
        TreeNode* root=new TreeNode(0);

        if(root1!=NULL && root2!=NULL ){
            root->val = root1->val + root2->val;
            
        }else if(root1==NULL && root2!=NULL){
            
            root->val = root2->val;

        }else{

            root->val = root1->val;

        }
        if(root1!=NULL && root2!=NULL){
            root->left = solve(root1->left, root2->left );
            
        }else if(root1==NULL){
            root->left=solve(NULL,root2->left);
            
        }else if(root2==NULL){
            root->left=solve(root1->left,NULL);
        }
        if(root1!=NULL && root2!=NULL)
        root->right = solve(root1->right, root2->right );
        else if(root1==NULL){
            root->right=solve(NULL,root2->right);
            
        }else if(root2==NULL){
            root->right=solve(root1->right,NULL);
        }
        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
       
        return solve(root1, root2);
        
    }
};
