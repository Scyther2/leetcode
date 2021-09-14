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
    ListNode* ans;
    int Size(ListNode* head)
    {
        int n=0;
        while(head!=NULL)
        {
            n++;
            head=head->next;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        int size=Size(head);
        int n;
        int t;
        if(size==0 || k==0)
        {
            return head;
        }
        if(k%size==0)
        {
            n=1;
        }
        else
        {
            n=size-(k%size)+1;
        }
        
        
        ListNode* cur=head;
        
        while(cur->next)
        {
            cur=cur->next;
        }
        
        cur->next=head;
        
        cur=head;
        n--;
        
        while(n--)
        {
            cur=cur->next;
        }
        
        ans=cur;
        
        
        
        cur=ans;
        
        size--;
        while(size--)
        {
            cur=cur->next;
        }
        
        cur->next=NULL;
        
        return ans;
        
        
        
        
    }
};
