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
    bool isUnivalTree(TreeNode* root) {
        int x=root->val;
        
        queue<pair<TreeNode* ,int>>q;
        
        q.push({root,root->val});
        
        while(!q.empty())
        {
            int t=q.front().second;
            TreeNode* n=q.front().first;
            if(t!=x)
            {
                return false;
            }
            q.pop();
            if(n->left!=NULL)
            {
                q.push({n->left,n->left->val});
            }
            if(n->right!=NULL)
            {
                q.push({n->right,n->right->val});
            }
        }
        
        return true;
    }
};
