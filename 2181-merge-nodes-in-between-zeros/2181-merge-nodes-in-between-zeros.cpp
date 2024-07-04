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

    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;

        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* temp;

        while (fast != NULL){
            if (fast->val == 0){
                slow->val = sum;
                slow->next = fast->next ? fast : NULL;
                slow = slow->next;
                sum = 0;
                fast = fast->next;
            }else{
                sum += fast->val;
                temp = fast;
                fast = fast->next;
                delete temp;
            }

            
        }
        return head;
    }

    
};