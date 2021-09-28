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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        vector<TreeNode*> tmp;
        vector<TreeNode*> cur;
        cur.insert(cur.begin(), root);
        double s;

        while (!cur.empty()){
            s = 0;
            for (auto i : cur){
                s += i->val;
                if (i->left)
                    tmp.insert(tmp.end(), i->left);
                if (i->right)
                    tmp.insert(tmp.end(), i->right);
            }
            ans.insert(ans.end(), s / cur.size());
            cur = tmp;
            tmp.clear();
        }
        
        return ans;
    }
};