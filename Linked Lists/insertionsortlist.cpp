/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* ptr=new ListNode(INT_MIN);
    ptr->next=A;
    while(A->next!=NULL){
        //cout<<A->val<<endl;
        ListNode* tmp=A->next;
        if(A->val<tmp->val){
            A=tmp;
            continue;
        }
        ListNode* pre=ptr;
        ListNode* nex=pre->next;
        while(nex->val<tmp->val){
            pre=nex;
            nex=nex->next;
        }
        A->next=tmp->next;
        tmp->next=pre->next;
        pre->next=tmp;
    }
    return ptr->next;
}

