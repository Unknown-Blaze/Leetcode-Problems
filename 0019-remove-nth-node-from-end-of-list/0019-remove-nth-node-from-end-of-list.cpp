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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if (head == NULL || head->next == NULL) return NULL;

        ListNode* r = head;
        ListNode* l = head;
        for (int i = 0; i <= n; i++){
            if (r == NULL){
                return head->next;
            }
            r = r->next;
        }
        while (r != NULL){
            r = r->next;
            l = l->next;
        }
        l->next = l->next->next;
        return head;
    }
};