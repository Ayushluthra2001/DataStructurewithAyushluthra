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
    void solve(TreeNode* root, unordered_map<int,int>&mapping){
        if(root==NULL) return ;
        solve(root->left,mapping);
        mapping[root->val]++;
        solve(root->right,mapping);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        unordered_map<int,int>mapping;
        unordered_map<int,vector<int>>mapping2;

        solve(root,mapping);
        int maxi=0;
        for(auto i : mapping){
            maxi=max(maxi,i.second);
            mapping2[i.second].push_back(i.first);
        }
        return mapping2[maxi];
        
    }
};
