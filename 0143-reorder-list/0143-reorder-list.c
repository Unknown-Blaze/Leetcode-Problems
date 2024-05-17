/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;

node* merge(node* h1, node* h2){
        if(h1==NULL) return h2;
        if(h2->next==NULL)return h1;
        h1->next=merge(h2,h1->next);
        return h1;
    }

void reorderList(struct ListNode* head) {
    
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    node* prev = NULL;
    node* curr = slow;
    node* next = NULL;

    while (curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    merge(head, prev);
}