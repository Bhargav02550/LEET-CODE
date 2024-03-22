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
    ListNode* reverseList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ListNode *temp=NULL,*temp1=NULL;
		ListNode *pre=head;
		while(pre!=NULL){
			temp1=pre->next;
			pre->next=temp;
			temp=pre;
			pre=temp1;
		}
		head=temp;
        return head;
    }
};