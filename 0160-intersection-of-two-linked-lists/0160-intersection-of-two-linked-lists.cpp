/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // to find length of 1st listnode
        ListNode* curr=headA;
        int a=0;
        while(curr!=NULL)
        {
            a++;
            curr=curr->next;
        }
        // to find length of 2nd  listnode

         ListNode* curr2=headB;
        int b=0;
        while(curr2!=NULL)
        {
            b++;
            curr2=curr2->next;
        }
        
        
        
        
        int diff=abs(a-b);
        
        if(a>b)
        {
            while(diff>0)
            {
                headA=headA->next;
                diff--;
            }
        }
        else
        {
            while(diff>0)
            {
                headB=headB->next;
                diff--;
            }
        }
        
        while(headA!=NULL && headB!=NULL)
        {
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
        
        
    }
};