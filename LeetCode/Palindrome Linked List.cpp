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
    bool isPalindrome(ListNode* head) {
        stack<ListNode*>s;
        ListNode * temp=head;
        while(temp){
            s.push(temp);
            temp=temp->next;
        }
        while(head){
            if(head->val != s.top()->val){
                return false;
            }
            head=head->next;
            s.pop();
        }
        return true;
    }
};
