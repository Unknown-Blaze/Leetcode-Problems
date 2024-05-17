/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;

ListNode* oddEvenList(struct ListNode* head){
    
    if (head == NULL || head->next == NULL || head->next->next == NULL) return head;

    ListNode* oddptr = head;
    ListNode* evenhead = head->next;
    ListNode* evenptr = head->next;
    while (oddptr->next != NULL && evenptr->next != NULL){
        oddptr->next = oddptr->next->next;
        oddptr = oddptr->next;
        evenptr->next = evenptr->next->next;
        evenptr = evenptr->next;
    }
    oddptr->next = evenhead;
    return head;
}