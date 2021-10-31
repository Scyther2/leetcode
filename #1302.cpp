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
    
    int deepestLeavesSum(TreeNode* root) {
        vector<pair<int,int>>v;
        
        queue<pair<TreeNode*,int>>q;
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
        
        int x=v[v.size()-1].second;
        
        int ans=0;
        
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i].second!=x)
            {
                break;
            }
            ans+=v[i].first;
        }
        
        return ans;
    }
};
