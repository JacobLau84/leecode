/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        int depth = 0;
        vector<Node*> nodes;
        if (root == NULL)
            return 0;
        else{
            nodes.push_back(root);
        }
        vector<Node*> new_list;
        while (!nodes.empty()){
            depth++;
            new_list.clear();
            for (auto n : nodes){
                for (auto c : n->children){
                    new_list.push_back(c);
                }
            }
            nodes = new_list;
        }
        return depth;
    }
};