class Solution {
public:
    void solve(TreeNode* root, int &ans, bool flag, int curr) {
        if (root == nullptr) return;

        ans = max(ans, curr);
        
        if (flag) {
           
            solve(root->left, ans, false, curr + 1); 
            
            solve(root->right, ans, true, 1); 
        } else {
            
            solve(root->right, ans, true, curr + 1); 
            
            solve(root->left, ans, false, 1); 
        }
    }

    int longestZigZag(TreeNode* root) {
        int ans = 0;
        solve(root, ans, true, 0); 
        solve(root, ans, false, 0); 

        return ans;
    }
};
