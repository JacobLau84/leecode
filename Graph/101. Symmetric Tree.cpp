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
bool isSym(TreeNode* L, TreeNode* R){
    if (L == NULL && R == NULL)
        return true;
    if (L != NULL && R != NULL && L->val == R->val)
        return isSym(L->left, R->right) && isSym(L->right, R->left);
    return false;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSym(root, root);
    }
};