
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        vector<int> ans;
        if(head==NULL)
            return head;
        while(temp!=NULL)
        {ans.push_back(temp->val);
            temp=temp->next;
        
        count++;}
        sort(ans.begin(),ans.end());
        ListNode* curr=head;
        for(int i=0;i<ans.size();i++)
        {
            curr->val=ans[i];
            curr=curr->next;
        }
        return head;
    }
};