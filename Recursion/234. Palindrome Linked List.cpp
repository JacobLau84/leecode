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
    bool isPalindrome(ListNode* head) {
        ListNode *new_head = head;
        stack<int> st;
        while (new_head){
            st.push(new_head->val);
            new_head = new_head->next;
        }
        int tmp;
        while (head){
            tmp = st.top();
            st.pop();
            if (head->val != tmp)
                return false;
            head = head->next;
        }
        return true;
    }
};
