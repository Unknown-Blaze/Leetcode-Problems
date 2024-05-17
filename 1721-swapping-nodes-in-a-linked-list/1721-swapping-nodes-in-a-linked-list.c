/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* swapNodes(struct ListNode* head, int k) {
    
    int count = 0;
    node* ptr = head;
    while (ptr != NULL){
        ptr = ptr->next;
        count++;
    }

    int end = count-k+1;
    ptr = head;
    node* swap1 = head;
    node* swap2 = head;
    int flag = 1;
    for (int i = 1; i <= count; i++){
        if ((i == k || i == end)){
            if (flag){
                swap1 = ptr;
                swap2 = ptr;
                flag = 0;
            }else{
                swap2 = ptr;
                break;
            }
        }
        
        ptr = ptr->next;
    }

    int temp = swap1->val;
    swap1->val = swap2->val;
    swap2->val = temp;

    return head;

}