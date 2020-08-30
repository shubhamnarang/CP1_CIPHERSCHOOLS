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
    ListNode* mid(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* h1,ListNode* h2){
        if(h1 == NULL){
            return h2;
        }
        if(h2 == NULL){
            return h1;
        }
        ListNode* newHead;
        if(h1->val < h2->val){
            newHead = h1;
            newHead->next = merge(h1->next,h2);
        }
        else{
            newHead = h2;
            newHead->next = merge(h1,h2->next);
        }
        return newHead;
    }
    ListNode* sortList(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* mid1 = mid(head);
        ListNode* a = head;
        ListNode* b = mid1->next;
        mid1->next = NULL;
        a = sortList(a);
        b = sortList(b);
        ListNode* newHead = merge(a,b);
        return newHead;
    }
};
