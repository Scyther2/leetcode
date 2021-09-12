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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ans=new ListNode(0);
        ListNode* fin=ans;
        
        ListNode* main=head;
        ListNode* main2=head;
        
        while(main!=NULL)
        {
            if(main->val<x)
            {
                ListNode* node=new ListNode(main->val);
                ans->next=node;
                ans=ans->next;
                
            }
            main=main->next;
        }
        
        while(main2!=NULL)
        {
            if(main2->val>=x)
            {
                ListNode* node=new ListNode(main2->val);
                ans->next=node;
                ans=ans->next;
            }
            main2=main2->next;
        }
        
        return fin->next;
    }
};
