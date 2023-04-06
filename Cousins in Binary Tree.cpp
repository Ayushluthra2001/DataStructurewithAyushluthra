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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode* , int>>q;
        q.push({root,-1});
        
        while(!q.empty()){
            bool xFind=false;
            bool yFind=false;
            int size=q.size();
            int parentX=-1;
            int parentY=-1;
            for(int i=0;i<size;i++){
                TreeNode* front=q.front().first;
                
                if(front->val==x) {
                    xFind=true;
                    // cout<<q.front().second<<endl;
                    parentX=q.front().second;
                }
                if(front->val==y) {
                    yFind=true;
                    parentY=q.front().second;
                }
                
                if(front->left) q.push({front->left,front->val});
                if(front->right)  q.push({front->right,front->val});
                q.pop();

            }   
            
            if(xFind== true && yFind==true && parentX!=parentY) return true;

        }
        return false;
    }
};
