/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    int len=0;
    ListNode* ptr=A;
    while(ptr!=NULL){
        len++;
        ptr=ptr->next;
    }
    if(len==1)
        return A;
    int K=2,flg=0;
    ListNode* ans;
    while(A->next!=NULL and A!=NULL){
        int k=K;
        ListNode* tmp=A;
        //cout<<A->val<<endl;
        while(k--){
            A=A->next;
        }
        ListNode* prev=A;
        ListNode* curr=tmp;
        ListNode* nex;
        while(curr!=A){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        tmp=prev;
        if(flg==1){
            ptr->next=tmp;
        }
        if(flg==0){
            ans=tmp;
        }
        ptr=tmp;
        k=K;
        k--;
        while(k--){
            ptr=ptr->next;
        }
        flg=1;
        if(A==NULL or A->next==NULL)
            return ans;
    }
    return ans;
}

