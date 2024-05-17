/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head = malloc(sizeof(struct ListNode));
    head->next = NULL;
    int carry;
    int value;
    struct ListNode* current;
    struct ListNode* ptr1 = l1;
    struct ListNode* ptr2 = l2;

    head->val = (ptr1->val + ptr2->val)%10;
    carry = (ptr1->val + ptr2->val)/10;
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
    while (ptr1 != NULL && ptr2 != NULL){
        struct ListNode* ptr = head;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        current = malloc(sizeof(struct ListNode));
        current->next = NULL;
        ptr->next = current;
        value = ptr1->val + ptr2->val + carry;
        current->val = value%10;
        carry = value/10;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    struct ListNode* ptr3;
    if (ptr1 == NULL){
            ptr3 = ptr2;
        }else{
            ptr3 = ptr1;
        }
    if ((ptr1 != NULL && ptr2 == NULL) || (ptr1 == NULL && ptr2 != NULL)){
        while (ptr3 != NULL){
            struct ListNode* ptr = head;
            while (ptr->next != NULL){
            ptr = ptr->next;
        }
            current = malloc(sizeof(struct ListNode));
            current->next = NULL;
            ptr->next = current;
            value = ptr3->val + carry;
            current->val = value%10;
            carry = value/10;
            ptr3 = ptr3->next;
        }
    }
    if (carry == 1){
        struct ListNode* ptr = head;
            while (ptr->next != NULL){
            ptr = ptr->next;
        }
            current = malloc(sizeof(struct ListNode));
            current->next = NULL;
            current->val = 1;
            ptr->next = current;
    }
    return head;
}













