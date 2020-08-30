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
    vector<int> nextLargerNodes(ListNode* head) {
        if(!head)
            return {};
        stack<int>s1;
        stack<int>s2;
        int l=0;
        while(head){
            s1.push(head->val);
            head=head->next;
            l++;
        }
        vector<int>result(l);
        for(int i=l-1;i>=0;i--){
            while(!s2.empty() && s2.top()<=s1.top()){
                s2.pop();
            }
            if(s2.empty()){
                result[i]=0;
            }
            else{
                result[i]=s2.top();
            }
            s2.push(s1.top());
            s1.pop();
        }
        return result;
    }
};
