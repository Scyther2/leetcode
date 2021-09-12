/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>v;
        unordered_map<int,int>m;
        
        ListNode* ans=new ListNode(0);
        ListNode* fin=ans;
        
        ListNode* cur=head;
        
        while(cur!=NULL)
        {
            v.push_back(cur->val);
            cur=cur->next;
        }
        
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        
        int n=v.size();
        
        for(int i=0;i<n;i++)
        {
            if(m[v[i]]>1)
            {
                v.erase(v.begin()+i);
                i--;
                n--;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            ListNode* node=new ListNode(v[i]);
            ans->next=node;
            ans=ans->next;
        }
        
        return fin->next;
        
    }
};
