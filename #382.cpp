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
    int n=0;
    ListNode *head1;
    Solution(ListNode* head) {
        ListNode *temp=head;
        head1=head;
        
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
    }
    
    int getRandom() {
        int index=rand()%n;
        
        ListNode *temp=head1;
        
        if(index==0)
        {
            return temp->val;
        }
        while(temp!=NULL && index--)
        {
            temp=temp->next;
            if(index==0)
            {
                return temp->val;
            }
        }
        
        return -1;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
