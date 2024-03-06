/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ListNode *tort = head;
        ListNode *hare = head;
        while(hare!=NULL and hare->next!=NULL){
            tort=tort->next;
            hare=hare->next->next;
            if(hare==tort){
                return true;
            }
        }
        return false;
    }
};