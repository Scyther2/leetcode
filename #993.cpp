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
    int depth[101];
    int par[101];
    void dfs(TreeNode* root,int d,int p)
    {
        if(root==NULL)
        {
            return;
        }
        depth[root->val]=d;
        par[root->val]=p;
        dfs(root->left,d+1,root->val);
        dfs(root->right,d+1,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,0,-1);
        
        if(depth[x]==depth[y] && par[x]!=par[y])
        {
            return true;
        }
        
        return false;
    }
};
