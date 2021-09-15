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
        ListNode* slow=head;
        ListNode* fast=head;
        bool isfound=0;
        
        if(head==NULL)
        {
            return head;
        }
        
        while(fast && fast->next)
        {
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                isfound=1;
                break;
                
            }
        }
        
        if(isfound)
        {
            slow=head;
            while(1)
            {
                if(slow==fast)
            {
                return slow;
            }
            slow=slow->next;
            fast=fast->next;
            }
        }
        
        return NULL;
        
        
    }
};
