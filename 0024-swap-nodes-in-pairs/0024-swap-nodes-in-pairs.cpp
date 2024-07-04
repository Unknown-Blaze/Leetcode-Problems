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
    ListNode* swapPairs(ListNode* head) {
        
        if (head == nullptr || head->next == nullptr) return head;
        
        ListNode* back = nullptr;
        ListNode* front = nullptr;
        ListNode* next = head;
        ListNode* prev = nullptr;
        ListNode* ret = nullptr;
        
        bool isFirstPair = true;

        while (next != nullptr && next->next != nullptr) {
            back = next;
            front = back->next;
            next = front->next;
            if (isFirstPair) {
                ret = front;
                isFirstPair = false;
            } else {
                prev->next = front;
            }

            front->next = back;
            back->next = next;
            prev = back;
        }

        return ret;
    }
};