class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        stack<int> st;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(st.top()!=temp->val)
            {
                return false;
            }
            else
            {
                st.pop();
                temp=temp->next;
            }
        }
        return true;
    }
};