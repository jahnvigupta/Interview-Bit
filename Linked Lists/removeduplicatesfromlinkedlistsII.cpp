/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *tmp=NULL;
    while(A!=NULL){
        //cout<<A->val<<endl;
        if(A->next==NULL)
            return A;
        if(A->val!=A->next->val ){
            tmp=A;
            break;
        }
        else {
            while(A->val==A->next->val){
                if(A->next->next==NULL)
                    return NULL;
                A->next=A->next->next;
            }
            A=A->next;
        }
    }
    //cout<<tmp->val<<endl;
    A=A->next;
    // tmp->next=A;
    // tmp=tmp->next;
    // cout<<tmp->val<<endl;
    ListNode *tmp1=tmp;
    while(A!=NULL){
        //cout<<A->val<<endl;
        if(A->next==NULL or A->val!=A->next->val ){
            tmp->next=A;
            //cout<<tmp->next->val<<endl;
            tmp=tmp->next;
            //cout<<tmp->val<<endl;
            A=A->next;
        }
        else {
            while(A->val==A->next->val){
                if(A->next->next==NULL){
                    tmp->next=NULL;
                    return tmp1;
                }
                A->next=A->next->next;
            }
            A=A->next;
        }
    }
    return tmp1;
}

