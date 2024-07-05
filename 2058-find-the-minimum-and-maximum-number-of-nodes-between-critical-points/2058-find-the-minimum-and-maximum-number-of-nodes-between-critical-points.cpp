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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* ptr = head;
        int temp = -1;
        int i = 0;
        int small = INT_MAX;
        int first = -1;
        while (ptr->next->next != NULL){
            int m = ptr->next->val;
            int l = ptr->val;
            int r = ptr->next->next->val;
            if (l < m && m > r || l > m && m < r) {
                if (first == -1) first = i;
                else small = min(i-temp, small);
                temp = i;
            }
            ptr = ptr->next;
            i++;
        }
        if (small == INT_MAX) return {-1, -1};
        return {small, temp-first};
    }
};