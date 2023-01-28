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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool flag=false;
        
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            
            if(temp==NULL)
            {
                flag= true;
            }
            
            else
            {
                if(flag==true)
                    return false;
                
                
                
                q.push(temp->left);
                q.push(temp->right);
                
            }
            
        }
        return flag;
        
    }
};

/*
first we will make a queue and insert the root
the take boolean flag as false
now we will traverse in while loop and if encounter any elemnt as null then we will change flag to true 
and go on in loop and if encounter any number after null it means it is not complete binary tree 
and we will return false
for e.g {1,2,3,4,5,null,6}
1
2 3
4 5 null 6
so in level traversal
after null 6 will come and due to null our flag would be already null so we will return false
*/