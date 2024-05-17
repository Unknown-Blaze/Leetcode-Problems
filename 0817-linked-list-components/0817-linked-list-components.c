/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node; 
int numComponents(struct ListNode* head, int* nums, int numsSize){
    int count = 0;
    bool consec = 0;
    node* ptr = head;

    while (ptr != NULL){
        for (int i = 0; i < numsSize; i++){
            if (nums[i] == ptr->val) {
                if (consec == 0){
                    consec = 1;
                    count++;
                }
                break;
            }
            if (i == numsSize-1){
                consec = 0;
            }
        }
        ptr = ptr->next;
    }
    return count;
}