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
    int len(ListNode *g){
        int a=0;
        while(g){
            a++;
            g=g->next;
        }
        return a;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA,*b=headB;
        int l1=0,l2=0;
        l1=len(a);
        l2=len(b);
        int k=abs(l1-l2);
        if(l2>l1){
            while(k){
                b=b->next;
                k--;
            }
        }
        else if(l2<l1){
            while(k){
                a=a->next;
                k--;
            }
        }
        while(a && b){
            if(a==b)
                return a;
            a=a->next;
            b=b->next;
        }
        return NULL;
    }
};
