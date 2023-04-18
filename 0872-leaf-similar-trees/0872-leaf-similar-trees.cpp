class Solution {
public:
    
    void helper(TreeNode* root,vector<int> & result){
        
        if(root==NULL)
            return;
        helper(root->left,result);
        helper(root->right,result);
        if(root->left==NULL && root->right==NULL)
            result.push_back(root->val);
    }
    
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        
        
        vector<int> ans1;
        vector<int> ans2;
        helper(root1,ans1);
        helper(root2,ans2);
        return ans1==ans2;        
    }
};