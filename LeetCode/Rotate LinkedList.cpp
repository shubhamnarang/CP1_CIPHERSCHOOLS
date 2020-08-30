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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
            return head;
        ListNode* c=head;
        int l=0;
        while(c){
            c=c->next;
            l++;
        }
        if(k%l==0)
            return head;
        ListNode* temp=head;
        for(int i=0;i<l-(k%l)-1;i++)
            temp=temp->next;
        ListNode* last=temp;
        ListNode* newHead=last->next;
        last->next=NULL;
        temp=newHead;
        while(temp->next)
            temp=temp->next;
        temp->next=head;
        return newHead;
    }
};
