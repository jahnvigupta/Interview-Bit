/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    int flg=0;
    ListNode* ptr1=new ListNode(0);
    ListNode* ptr2=new ListNode(0);
    ListNode* p1=ptr1;
    ListNode* p2=ptr2;
    while(A!=NULL){
        if(A->val>=B){
            ptr1->next=A;
            ptr1=ptr1->next;
            A=A->next;
        }
        else if(A->val<B){
            ptr2->next=A;
            ptr2=ptr2->next;
            A=A->next;
        }
    }
    if(p1->next==NULL){
        return p2->next;
    }
    else if(p2->next==NULL){
        return p1->next;
    }
    else {
        ptr1->next=NULL;
        ptr2->next=p1->next;
        return p2->next;
    }
}

