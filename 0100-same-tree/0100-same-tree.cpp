/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    
    void helper(TreeNode* root,vector<int>&result)
        {
            if(root==NULL)
            {result.push_back(0);
                return ;}
            helper(root->left,result);
        helper(root->right,result);
            result.push_back(root->val);
            
        }
        
        
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> result;
        vector<int> result2;
        helper(p,result);
        helper(q,result2);
        
        return result==result2;
        
        
    }
};