/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return NULL;
        if (head->val == val)
            return removeElements(head->next, val);
        head->next = removeElements(head->next, val);
        return head;
        /*
        ListNode *dummy_node = new ListNode(0);
        dummy_node->next = head;
        ListNode *current_node = dummy_node;
        while (current_node->next != NULL){
            if (current_node->next->val == val){
                current_node->next = current_node->next->next;
            }
            else{
                current_node = current_node->next;
            }
        }
        return dummy_node->next;
        */
    }
};