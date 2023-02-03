class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val=node->next->val;
        node->next=node->next->next;
        
       
    }
};
/*
we are simply storing node->next->val into node
and then changing link of node to next of next of node


*/