/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
node* mergeTwoLists(node* list1, node* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    node* ptr = (node*)malloc(sizeof(node));
    ptr->next = NULL;
    if (list1->val > list2->val){
        ptr->val = list2->val;
        list2 = list2->next;
    }else{
        ptr->val = list1->val;
        list1 = list1->next;
    }
    
    node* head = ptr;
    
    while (list1 != NULL && list2 != NULL){
        node* next = (node*)malloc(sizeof(node));
        if (list1->val >= list2->val){
            next->val = list2->val;
            list2 = list2->next;
        }else{
            next->val = list1->val;
            list1 = list1->next;
        }
        ptr->next = next;
        ptr = ptr->next;
    }
    if (list1 == NULL){
        ptr->next = list2;
    }else{
        ptr->next = list1;
    }
    return head;
}