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

    ListNode* reverse(ListNode** head){
        ListNode* curr = *head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        
        ListNode* ptr = reverse(&head);
        ListNode* ret = ptr;
        int carry = 0;
        while (ptr->next != NULL){
            if (ptr->val < 5) {
                ptr->val = (2*(ptr->val) + carry);
                carry = 0;
            }else{
                ptr->val = (2*(ptr->val) + carry) % 10;
                carry = 1;
            }
            ptr = ptr->next;
        }
        if (ptr->val < 5) {
            ptr->val = (2*(ptr->val) + carry);
        }else if (ptr->val < 10){
            ptr->val = (2*(ptr->val) + carry) % 10;
            ptr->next = new ListNode(1);
        }

        return reverse(&ret);
    }
};