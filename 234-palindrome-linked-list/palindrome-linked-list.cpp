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
    bool check(string s){
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1])return false;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string s="";
        ListNode *temp=head;
        while(temp){
            s.append(to_string(temp->val));
            temp=temp->next;
        }
        return check(s);
    }
};