/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* tmp=A;
    int len=0;
    while(tmp!=NULL){
        len++;
        tmp=tmp->next;
    }
    if(B%len==0)
        return A;
    int X=len-B%len;
    int Z=X;
    tmp=A;
    while(X--){
        A=A->next;
    }
    ListNode* ans=A;
    ListNode* tmp1=tmp;
    Z--;
    while(Z--){
        tmp1=tmp1->next;
    }
    tmp1->next=NULL;
    int K=B%len-1;
    while(K--){
        A=A->next;
    }
    A->next=tmp;
    return ans;
}

