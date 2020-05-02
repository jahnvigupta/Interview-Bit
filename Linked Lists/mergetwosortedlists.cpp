/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* tmp=NULL;
    ListNode* tmp1=NULL;
    if(A->val<=B->val){
        tmp=A;
        A=A->next;
    }
    else if(A->val>B->val){
        tmp=B;
        B=B->next;
    }
    tmp1=tmp;
    while(A!=NULL and B!=NULL){
        if(A->val<=B->val){
            tmp->next=A;
            A=A->next;
            tmp=tmp->next;
        }
        else {
            tmp->next=B;
            B=B->next;
            tmp=tmp->next;
        }
    }
    while(A!=NULL){
        tmp->next=A;
        A=A->next;
        tmp=tmp->next;
    }
    while(B!=NULL){
        tmp->next=B;
        B=B->next;
        tmp=tmp->next;
    }
    return tmp1;
}

