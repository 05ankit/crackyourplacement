class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* temp=head;
        stack<ListNode*> st;
        while(temp->next!=NULL)
        {
            st.push(temp);
            temp=temp->next;
        }
        head=temp;
        while(!st.empty())
        {
            temp->next=st.top();
            temp=temp->next;
            st.pop();
        }
        temp->next=NULL;
        return head;
    }
};