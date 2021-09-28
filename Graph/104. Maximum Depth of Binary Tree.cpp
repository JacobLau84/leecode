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
int maxD(TreeNode* root, int i){
    if (root == NULL)
        return i;
    else{
        i++;
        return max(maxD(root->left, i), maxD(root->right, i));
    }
}
class Solution {
public:
    int maxDepth(TreeNode* root) {
       return maxD(root, 0); 
    }
};