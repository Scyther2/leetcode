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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode* nd=new TreeNode(val);
        
        if(root==NULL)
        {
            return nd;
        }
        TreeNode* prev=root;
        TreeNode* cur=root;
        
        while(cur!=NULL)
        {
            prev=cur;
            if(cur->val>val){
                cur=cur->left;
            }
            else
            {
                cur=cur->right;
            }
        }
        
        
        
        if(prev->val>val)
        {
            prev->left=nd;
        }
        else
        {
            prev->right=nd;
        }
        
        return root;
    }
};
