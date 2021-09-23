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
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    bool isPalindrome(ListNode* head) {
        int n=size(head);
        
        ListNode* mid=head;
        
        int x=n/2;
        if(n%2==1)
        {
            x++;
        }
        
        
        
        while(x--)
        {
            mid=mid->next;
        }
        
        ListNode* temp=mid;
        ListNode* prev=NULL,*next;
        
        while(temp!=NULL)
        {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        
        int y=n/2;
        
        while(y--)
        {
            if(head->val!=prev->val)
            {
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        
        return true;
    }
};
