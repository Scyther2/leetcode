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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(0);
        ListNode* head=ans;
        
        while(l1 || l2)
        {
            if(l1 && l2)
            {
                if(l1->val<l2->val)
                {
                    ListNode* temp=new ListNode(l1->val);
                    ans->next=temp;
                    ans=ans->next;
                    l1=l1->next;
                }
                else
                {
                    ListNode* temp=new ListNode(l2->val);
                    ans->next=temp;
                    ans=ans->next;
                    l2=l2->next;
                }
            }
            else if(l2==NULL)
            {
                ListNode* temp=new ListNode(l1->val);
                ans->next=temp;
                ans=ans->next;
                l1=l1->next;
            }
            else if(l1==NULL)
            {
                ListNode* temp=new ListNode(l2->val);
                ans->next=temp;
                ans=ans->next;
                l2=l2->next;
            }
        }
        
        return head->next;
    }
};
