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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // recursive
        bool flag = 0;
        if ((p == NULL) and (q == NULL))
            return true;
        else if ((p != NULL) && (q != NULL)){
            if (p->val == q->val){
                if (isSameTree(p->left, q->left)){
                    flag = isSameTree(p->right, q->right);
                }
            return flag;
            }
        }
        else
            return false;
        return 0;
    }
};