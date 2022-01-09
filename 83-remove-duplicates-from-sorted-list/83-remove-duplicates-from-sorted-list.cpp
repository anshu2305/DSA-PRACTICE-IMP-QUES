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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p= head;
        if(!head || !head->next){
            return head;
        }
        //int i=0;
        ListNode* q= head->next;
        while(q){
            cout<<"p:" <<p->val<<" q: "<< q->val<<endl;
            if(p->val == q->val){
                p->next= q->next;
                if(q->next)
                    q->next= p->next;
            }
            else{
                p=p->next;
            }
            q=q->next;
        }
        return head;
    }
};