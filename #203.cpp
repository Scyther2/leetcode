class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur=head;
        
        ListNode* prev=head;
        
        if(cur!=NULL && cur->val==val)
        {
            while(cur!=NULL  && cur->val==val )
            {
                prev=cur;
                cur=cur->next;
                head=cur;
                
            }
        }
        
        while(cur!=NULL)
        {
            if(cur->val==val)
            {
                prev->next=cur->next;
                cur=cur->next;
                
            }
            else{
                prev=cur;
                cur=cur->next;
            }    
        }
        
        
        if(cur!=NULL && cur->val==val)
        {
            prev->next=NULL;
        }
        
        if(prev!=NULL && prev->val==val)
        {
            prev->next=NULL;
        }
        
        
       
        
        return head;
    }
};
