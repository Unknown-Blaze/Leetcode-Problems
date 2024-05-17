/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
bool isPalindrome(struct ListNode* head){
    
    if (head == NULL || head->next == NULL) return 1;
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* curr = slow;
    ListNode* prev = NULL;
    ListNode* next = NULL;


    while (curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    ListNode* ptr = head;
    ListNode* ptr2 = prev;
    while (ptr2 != NULL){
        if (ptr->val != ptr2->val) return false;
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    return true;

    

    
}