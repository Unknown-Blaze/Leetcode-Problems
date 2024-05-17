/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



typedef struct {
    int size;
    int* arr;
} Solution;


Solution* solutionCreate(struct ListNode* head) {
    Solution* sol = (Solution*)malloc(sizeof(Solution));
    sol->size = 0;
    sol->arr = NULL;
    
    struct ListNode* ptr = head;
    while (ptr != NULL){
        sol->size++;
        ptr = ptr->next;
    }
    ptr = head;
    sol->arr = (int*)malloc(sizeof(int)*sol->size);
    for (int i = 0; i < sol->size; i++){
        sol->arr[i] = ptr->val;
        ptr = ptr->next;
    }
    return sol;
}

int solutionGetRandom(Solution* obj) {
    int result = (rand() % obj->size);
    return obj->arr[result];
}

void solutionFree(Solution* obj) {
    free(obj->arr);
}

/**
 * Your Solution struct will be instantiated and called as such:
 * Solution* obj = solutionCreate(head);
 * int param_1 = solutionGetRandom(obj);
 
 * solutionFree(obj);
*/