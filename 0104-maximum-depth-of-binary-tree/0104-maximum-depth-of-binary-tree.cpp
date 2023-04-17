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
    
    void helper(TreeNode* root, int& count)
    {
        if(root==NULL)
            return ;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int x=q.size();
            while(x>0){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                x--;
            }
            count++;
            
            
        }
        
    }
    
    
    int maxDepth(TreeNode* root) {
        vector<vector<int>>result;
        int count=0;
        helper(root,count);
        return count;
    }
};