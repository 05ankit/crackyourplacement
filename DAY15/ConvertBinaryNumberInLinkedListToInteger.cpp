class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> temp2;
        while(head!=NULL)
        {
            temp2.push_back(head->val);
            head=head->next;
        }
        int j=0;
        int ans=0;
        for(int i=temp2.size()-1;i>=0;i--)
        {
            ans=ans+(pow(2,j)*temp2[i]);
            j++;
        }
        return ans;
    }
};