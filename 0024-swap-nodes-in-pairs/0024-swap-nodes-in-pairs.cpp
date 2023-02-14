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
    ListNode* swapPairs(ListNode* head) {
        
        //if only 1 or less than 1 node present in list
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode*curr=head->next->next;
        ListNode* prev=head;
        head=head->next;//we have swapped head because after swapping we will be calling next of head as it has been reversed
        head->next=prev;
        
        while(curr!=NULL && curr->next!=NULL)
        {
            prev->next=curr->next;
            prev=curr;
            ListNode* temp=curr->next->next;
            curr->next->next=curr;
            curr=temp;
            
            
        }
        prev->next=curr;
        return head;
        
        
    }
};