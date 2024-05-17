/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    if (head == NULL || k <= 1) return head;

    node newhead; 
    newhead.next = head;
    node* prevGroupEnd = &newhead;

    while (true) {
        node* kthNode = prevGroupEnd;
        for (int i = 0; i < k && kthNode != NULL; i++) {
            kthNode = kthNode->next;
        }

        if (kthNode == NULL) break; 

        node* curr = prevGroupEnd->next;
        node* next = NULL;
        node* prev = kthNode->next;

        while (curr != kthNode) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        next = curr->next;
        curr->next = prev;

        node* temp = prevGroupEnd->next;
        prevGroupEnd->next = kthNode;
        prevGroupEnd = temp;
        prevGroupEnd->next = next;  
    }
    return newhead.next;
}
