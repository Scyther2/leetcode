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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*,int>>q;
        stack<pair<int,int>>stk;
        
        if(root==NULL)
        {
            return ans;
        }
        
        q.push({root,0});
        
        while(!q.empty())
        {
            TreeNode* temp=q.front().first;
            int x=q.front().second;
            q.pop();
            stk.push({temp->val,x});
            
            if(temp->right!=NULL)
            {
                q.push({temp->right,x+1});
                
            }
            if(temp->left!=NULL)
            {
                q.push({temp->left,x+1});
                
            }
        }
        
        int lev=stk.top().second;
        
        while(!stk.empty())
        {
            vector<int>temp;
            while(!stk.empty() && stk.top().second==lev)
            {
                temp.push_back(stk.top().first);
                stk.pop();
            }
            ans.push_back(temp);
            lev--;
        }
        
        return ans;
        
    }
};
