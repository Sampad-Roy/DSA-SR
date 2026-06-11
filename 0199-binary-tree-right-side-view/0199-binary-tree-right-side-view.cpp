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
        
       if(root==NULL) return {};


        queue<TreeNode*>Q;
        vector<int>ans;
        Q.push(root);

        while(!Q.empty())
        {
            int n=Q.size();
            TreeNode* node=NULL;
            while(n--)
            {
               node=Q.front();
               Q.pop();
               if(node->left!=NULL)
               {
                Q.push(node->left);
               }
               if(node->right!=NULL)
               {
                Q.push(node->right);
               }
            }

            ans.push_back(node->val);
        }

        return ans;



        
    }
};