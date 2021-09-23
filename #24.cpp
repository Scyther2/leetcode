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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* temp1=head;
        ListNode* temp2=NULL;
        ListNode* ans=NULL;
        
        if(temp1==NULL || temp1->next==NULL)
        {
            return temp1;
        }
        
        while(temp1!=NULL && temp1->next!=NULL)
        {
            if(temp2!=NULL)
            {
                temp2->next->next=temp1->next;
            }
            temp2=temp1->next;
            temp1->next=temp1->next->next;
            temp2->next=temp1;
            
            if(ans==NULL)
            {
                ans=temp2;
            }
            temp1=temp1->next;
        }
        
        return ans;
    }
};
