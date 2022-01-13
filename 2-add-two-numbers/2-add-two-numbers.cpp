
class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p=l1 , *q= l2;
        int carry = 0;
        while(p->next && q->next){
            int sum = (p->val + q->val + carry);
            carry = (sum) / 10;
            p->val = sum % 10;
            p=p->next;
            q=q->next;
            
        }
        if(!p->next && !q->next){
            int sum = (p->val + q->val + carry);
            carry = (sum) / 10;
            p->val = sum % 10;
            if(carry!=0){
                ListNode *temp = new ListNode(carry);
                p->next = temp;
            }
            p=p->next;
            q=q->next;
            return l1;
        }
        if(!p->next && q->next ){
            carry+= p->val;
            while(q != NULL){
                p->val= (q->val + carry)%10;
                carry = (q->val + carry) / 10;
                
                if(!q->next && carry!=0){
                    ListNode *temp = new ListNode(carry);
                    p->next = temp;
                    return l1;
                }
                else if(!q->next && carry==0){
                    return l1;
                }
                else{
                    
                    if(p->next==NULL){
                        //cout<<p->val<<endl;
                        ListNode *temps = new ListNode(10);
                        p->next = temps;
                    }
                    p= p->next;
                    q=q->next;
                }
            }
                
        }
        if(p->next && !q->next){
            carry+= q->val;
            while(p != NULL){
                int sum (p->val + carry);
                p->val = sum%10 ;
                carry = sum / 10;
                
                if(!p->next && carry!=0){
                    ListNode *temp = new ListNode(carry);
                    p->next = temp;
                    return l1;
                }
                p = p->next;
            }
        }
        
        
        return l1;
    }
};