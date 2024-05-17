/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int counta = 0;
    int countb = 0;

    node* ptr1 = headA;
    node* ptr2 = headB;
    while (ptr1 != NULL){
        counta++;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL){
        countb++;
        ptr2 = ptr2->next;
    }
    ptr1 = headA;
    ptr2 = headB;
    int diff = counta - countb;
    if (diff > 0){
        for (int i = 0; i < diff; i++){
            ptr1 = ptr1->next;
        }
    }else if (diff < 0){
        for (int i = 0; i > diff; i--){
            ptr2 = ptr2->next;
        } 
    }
    while (ptr1 != NULL && ptr2 != NULL){
        if (ptr1 == ptr2) return ptr1;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}