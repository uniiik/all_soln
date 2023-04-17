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
    
    void helper(TreeNode* root, vector<vector<int>> & result){
        if(root==NULL)
            return ;
        
        
        
        queue<TreeNode*> q;
        q.push(root);
        bool even=0;
        while(!q.empty()){
            int x=q.size();
            vector<int> ans;
            
            
            while(x>0){
                TreeNode* temp=q.front();
                ans.push_back(temp->val);
                q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                x--;
            }
            
            if(even==0)
            {
                result.push_back(ans);
                even=1;
            }
            else{
                even=0;
                reverse(ans.begin(),ans.end());
                result.push_back(ans);
            }
            
        }
        
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        helper(root,result);
        return result;
    }
};