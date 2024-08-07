class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3;
        ListNode* head;
        if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        if(list1->val<list2->val)
        {
            head=list1;
            list1=list1->next;
        }
        else{
            head=list2;
            list2=list2->next;
        }
        list3=head;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                list3->next=list1;
                list1=list1->next;
            }
            else
            {
                list3->next=list2;
                list2=list2->next;
            }
            list3=list3->next;
        }
        if(list1!=NULL)
        {
            list3->next=list1;
        }
        else
        {
            list3->next=list2;
        }
        return head;
        
        
    }
};
