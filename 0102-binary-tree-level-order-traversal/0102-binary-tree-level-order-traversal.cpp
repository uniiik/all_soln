class Solution {
public:
    void helper(TreeNode* root, vector<vector<int>> &result)
    {
        if(root==NULL)
            return ;
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(!q.empty())
        {
            int x=q.size();
            vector<int> ans;
            while(x>0)
            {
            TreeNode* temp=q.front();
            q.pop();
            ans.push_back(temp->val);
            
            if(temp->left!=NULL)
                q.push(temp->left);
             if(temp->right!=NULL)
                q.push(temp->right);
                x--;
        }
            
            result.push_back(ans);
        
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
       // vector<int> ans;
        helper(root,result);
        return result;
        
    }
};