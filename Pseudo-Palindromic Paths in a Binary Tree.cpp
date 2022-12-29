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
    bool isPalindrome(vector<int>&digit){
        int even=0;
        int odd=0;
        for(int i=1;i<=9;i++){
            if(digit[i]%2!=0) odd++;
        }
        if(odd>1) return false;
        
        return true;
        
    }
    void dfs(TreeNode* root, int &count ,vector<int>&digit){
        if(root==NULL) return;
        digit[root->val]++;
        if(root->left==NULL && root->right==NULL){
            if(isPalindrome(digit)){
                count++;
            }
        }else{
                dfs(root->left,count,digit);
            dfs(root->right,count,digit);
        }
        digit[root->val]--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int count=0;
        vector<int>digit(10,0);
        dfs(root,count,digit);
        return count;
    }
};
