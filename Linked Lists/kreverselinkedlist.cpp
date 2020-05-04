/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    int len=0;
    ListNode* ptr=A;
    while(ptr!=NULL){
        len++;
        ptr=ptr->next;
    }
    ListNode* ans;
    int flg=0;
    //cout<<len<<endl;
    int x=len/B;
    while(A!=NULL){
        int b=B;
        ListNode* tmp=A;
        //cout<<A->next->val<<endl;
        while(b--){
            A=A->next;
        }
        //cout<<A->val<<endl;
        ListNode* prev=A;
        ListNode* nex;
        ListNode* curr=tmp;
        b=B;
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
        if(flg==0)
            ans=tmp;
        //cout<<tmp->val;
        ptr=tmp;
        b=B;
        b--;
        while(b--){
            ptr=ptr->next;
        }
        flg=1;
    }
    return ans;
}

