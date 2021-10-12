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
    int depth=0;
    void dfs(TreeNode* node,int dis)
    {
        if(node==NULL)
        {
            return;
        }
        depth=max(depth,dis);
        dfs(node->left,dis+1);
        dfs(node->right,dis+1);
        
        
    }
    int maxDepth(TreeNode* root) {
        dfs(root,1);
        
        return depth;
        
    }
};
