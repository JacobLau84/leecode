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
    ListNode* reverseList(ListNode* head) {
        /* 
        // recursive
        if (head == NULL or head->next == NULL){
            return head;
        }
        ListNode *new_head = new ListNode;
        new_head = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return new_head;
        */
        
        // iterative
        ListNode *rev = NULL;
        while (head){
            ListNode *tmp = head->next;
            head->next = rev;
            rev = head;
            head = tmp;
        }
        return rev;
    }
};