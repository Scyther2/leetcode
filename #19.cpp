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
    int size(ListNode* head)
    {
        int ans=0;
        while(head)
        {
            head=head->next;
            ans++;
        }
        return ans;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=size(head);
        
        int index=x-n+1;
        
        ListNode* temp;
        ListNode* cur=head;
        
        if(index==1)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
        while(--index)
        {
            temp=cur;
            cur=cur->next;
        }
        temp->next=cur->next;
        delete cur;
        return head;
        
        
    }
};
