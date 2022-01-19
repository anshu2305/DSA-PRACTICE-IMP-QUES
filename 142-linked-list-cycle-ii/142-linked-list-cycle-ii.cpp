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
    ListNode *detectCycle(ListNode *head) {
       if(!head || !head->next)
           return NULL;
       ListNode *p=head; //fastptr
       ListNode *q=head; //slowptr
       bool isloop=false;
       while(p && q && p->next) {
           q=q->next;
           p=p->next->next;
           
           if(p==q){
                p=head;
                while(p!=q){
                    p=p->next;
                    q=q->next;
                }
                return q;
           }
       }
       return NULL;
    }
};