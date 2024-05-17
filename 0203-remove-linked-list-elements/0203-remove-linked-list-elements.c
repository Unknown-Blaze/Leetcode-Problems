/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
struct ListNode* removeElements(struct ListNode* head, int val) {

    node* ptr = head;
    node* newhead = (node*)malloc(sizeof(node));
    newhead->next = NULL;
    node* ret = NULL;

    while (ptr != NULL){
        if (ptr->val != val){
            newhead->val = ptr->val;
            ret = newhead;
            ptr = ptr->next;
            break;
        }
        ptr = ptr->next;
    }

    while (ptr != NULL){

        if (ptr->val != val){
            node* newval = (node*)malloc(sizeof(node));
            newval->val = ptr->val;
            newval->next = NULL;
            newhead->next = newval;
            newhead = newhead->next;
        }

        ptr = ptr->next;
    }

    return ret;


}
