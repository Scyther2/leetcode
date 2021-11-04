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
    int findBottomLeftValue(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        vector<pair<int,int>>v;
        
        q.push({root,0});
        v.push_back({root->val,0});
        
        while(!q.empty())
        {
            TreeNode* temp=q.front().first;
            int x=q.front().second;
            q.pop();
            
            if(temp->left!=NULL)
            {
                q.push({temp->left,x+1});
                v.push_back({temp->left->val,x+1});
            }
            
            if(temp->right!=NULL)
            {
                q.push({temp->right,x+1});
                v.push_back({temp->right->val,x+1});
            }
            
        }
        int target=v[v.size()-1].second;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i].second==target)
            {
                return v[i].first;
            }
        }
        
        return 0;
    }
};
