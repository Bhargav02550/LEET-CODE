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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *temp = dummy;

        while (temp != nullptr) {
            int sum = 0;
            ListNode *current = temp->next;
            while (current != nullptr) {
                sum += current->val;
                if (sum == 0) {
                    temp->next = current->next;
                }
                current = current->next;
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};
