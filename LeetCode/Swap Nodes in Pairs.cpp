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
        if(!head || !head->next)
            return head;
        ListNode* c=head;
        int l=0;
        while(c){
            c=c->next;
            l++;
        }
        ListNode* l1=head;
        ListNode* l2=head->next;
        ListNode* newHead=head->next;
        ListNode* prev=NULL;
        while(l2->next!=NULL){
            l1->next = l2->next;
            l2->next = l1;
            prev=l1;
            if(l1->next->next!=NULL){
                l1=l1->next;
                l2=l1->next;
                prev->next=l2;
            }
            else
                break;
        }
        if(l%2==0){
            l2->next=l1;
            l1->next=NULL;
        }
        return newHead;
    }
};
