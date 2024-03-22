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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ListNode* head1=list1;
        ListNode* head2=list2;
        int x=a-1;
        while(x--)
        {
            head1=head1->next;
        }
        ListNode* list=head1->next;
        ListNode* listhead=nullptr;
        int k=b-a;
        while(k--)
        {
          list=list->next;
        }
        listhead=list->next;
        while(head2!=nullptr)
        {
            head1->next=head2;
            head2=head2->next;
            head1=head1->next;
        }
        while(listhead!=nullptr)
        {
         head1->next=listhead;
         listhead=listhead->next;
         head1=head1->next;
        }
       
        return list1;
        
    }
};