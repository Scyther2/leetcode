/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* ans=head;
        
        unordered_map<ListNode*,int>m;
        
        while(ans)
        {
            if(m.find(ans)!=m.end())
            {
                return ans;
            }
            
            m[ans]++;
            ans=ans->next;
        }
        
        return NULL;
    }
};
