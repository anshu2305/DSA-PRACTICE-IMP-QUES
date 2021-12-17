//Time complexity= O(n) + O(n) = o(n), Space Complexity = O(1)    

    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next){
            return head;
        }
        ListNode* p=head, *curr=head;
        int i=0, n=0;
        while(curr->next){
            n++;
            curr=curr->next;
        }
        n=n+1;
        ListNode* last = curr;
        
        while(i < floor(n/2)){
            ListNode* temp = p->next;
            p->next = p->next->next;
            p=p->next;
            
            last->next = temp;
            temp->next=NULL;
            last =temp;
            i++;
        }
        return head;
    }
