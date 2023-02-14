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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int > result;
        if(root==NULL)
            return  result;
        while(!q.empty())
        {
            int x=q.size();
            int data=0;
            while(x>0)
            {
                TreeNode* temp=q.front();
                data=temp->val;
                q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                
                
                
                x--;
            }
            result.push_back(data);
            
            
        }
        
            
return result;


        
        
    }
};