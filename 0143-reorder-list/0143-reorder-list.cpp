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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
            return;
        
        //first we will find middle point of list
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //reverse 2nd half of list
        
        ListNode * prev=nullptr, *curr=slow->next,*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        slow->next=nullptr;
        
        
        ListNode * p1=head, *p2=prev;
        while(p1 && p2){
            ListNode * temp1=p1->next;
            ListNode * temp2=p2->next;
            p1->next=p2;
            p2->next=temp1;
            p1=temp1;
            p2=temp2;
            
        }
        
        
        
    }
};