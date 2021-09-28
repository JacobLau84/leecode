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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL)
            return root2;
        if (root2 == NULL)
            return root1;
        queue<TreeNode*> q1, q2;
        q1.push(root1);
        q2.push(root2);
        while (not q1.empty() && not q2.empty()){
            TreeNode* n1 = q1.front();
            TreeNode* n2 = q2.front();
            q1.pop();
            q2.pop();
            if (n1 != NULL && n2 != NULL){
                n1->val += n2->val;
                if (n1->left == NULL && n2->left != NULL)
                    n1->left = new TreeNode(0);
                if (n1->right == NULL && n2->right != NULL)
                    n1->right = new TreeNode(0);
                q1.push(n1->left);
                q1.push(n1->right);
                q2.push(n2->left);
                q2.push(n2->right);
            }
        }
        return root1;
    }
};