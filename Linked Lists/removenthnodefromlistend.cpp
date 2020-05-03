/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* tmp=A;
    int len=0;
    while(tmp!=NULL){
        len++;
        tmp=tmp->next;
    }
    //cout<<len<<endl;
    if(B>len){
        A=A->next;
        return A;
    }
    else {
        if(len==1 and B==1)
            return NULL;
        if(B==len){
            A=A->next;
            return A;
        }
        tmp=A;
        int rem=len-B-1;
        while(rem--)
            A=A->next;
        A->next=A->next->next;
        return tmp;
    }
    
}
