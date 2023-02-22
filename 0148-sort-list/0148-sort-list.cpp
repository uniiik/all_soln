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
    ListNode* sortList(ListNode* head) {
        ListNode* curr=head;
        int size=0;
        vector<int> ans;
        while(curr!=NULL)
        {
            ans.push_back(curr->val);
            size++;
            curr=curr->next;
        }
        sort(ans.begin(),ans.end());
        curr=head;
        for(int i=0;i<size;i++)
        {
            curr->val=ans[i];
            curr=curr->next;
        }
        
        return head;
        
    }
};