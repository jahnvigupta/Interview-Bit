/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int car=0;
    ListNode* tmp=A;
    ListNode* tmp1=tmp;
    while(A!=NULL and B!=NULL){
        int x=(A->val+B->val+car);
        tmp->val=x%10;
        car=x/10;
        if(A->next!=NULL){
            tmp->next=A->next;
            tmp=tmp->next;
        }
        else if(A->next==NULL){
            if(B->next==NULL){
                A=NULL;
                B=NULL;
                break;
            }
            tmp->next=B->next;
            tmp=tmp->next;
            B=B->next;
            A=NULL;
            break;
        }
        A=A->next;
        B=B->next;
    }
    if(A!=NULL){
        while(A!=NULL){
            int x=A->val+car;
            tmp->val=x%10;
            car=x/10;
            if(A->next==NULL){
                break;
            }
            A=A->next;
            tmp=tmp->next;
        }
    }
    if(B!=NULL){
        while(B!=NULL){
            int x=B->val+car;
            tmp->val=x%10;
            car=x/10;
            if(B->next==NULL){
                break;
            }
            B=B->next;
            tmp=tmp->next;
        }
    }
    if(car!=0){
        ListNode* z = new ListNode(car);
        z->val=car;
        tmp->next=z;
    }
    return tmp1;
}
