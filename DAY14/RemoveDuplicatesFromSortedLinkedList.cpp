class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a=head;
        ListNode* b;
        if(head==NULL)
        {
            return head;
        }
        while(a->next!=NULL)
        {
            if(a->val==a->next->val)
            {
                b=a->next->next;
                a->next=b;
            }
            else
            {
                a=a->next;
            }
        }
        return head;
    }
};