/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ret;

        int count = 0;
        ListNode* ptr = head;
        while (ptr != NULL){
            count++;
            ptr = ptr->next;
        }

        ptr = head;
        int q = count/k;
        int m = count%k;
        int flag = 0;
        for (int i = 0; i < k; i++){
            ret.push_back(ptr);
            if (m != 0){
                flag = 1;
                m--;
            }else{
                flag = 0;
            }
            for (int i = 0; i < q + flag - 1; i++){
                ptr = ptr->next;
            }
            if (ptr == NULL) break;
            ListNode* curr = ptr;
            ptr = ptr->next;
            curr->next = NULL;
        }
        if(q == 0){
            int size = ret.size();
            for (int i = 0; i < k-size; i++){
                ret.push_back(NULL);
            }
        }
        return ret;
    }
};