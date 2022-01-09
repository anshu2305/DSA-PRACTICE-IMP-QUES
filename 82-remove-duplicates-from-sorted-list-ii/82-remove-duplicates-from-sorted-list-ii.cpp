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
        if(!head || !head->next)
            return head;
        
        map<int, int> freq;
        ListNode* p=head;
        
        while(p){
            freq[p->val]++;
            p=p->next;
        }
        ListNode* prev=NULL;
        while(head && freq[head->val] > 1){
            head=head->next;
        }
        p=head;
        while(p){
            if(freq[p->val] > 1)
                prev->next = p->next;
            else
                prev = p;
            p=p->next;    
        }
        return head;
    }
};