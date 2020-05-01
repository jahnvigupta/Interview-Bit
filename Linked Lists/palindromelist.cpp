/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    int len=0;
    ListNode* tmp=A;
    while(tmp!=NULL){
        len++;
        tmp=tmp->next;
    }
    //cout<<"len"<<len<<endl;
    int tmpl=(len)/2;
    tmp=A;
    while(tmpl--){
        tmp=tmp->next;
    }
    ListNode* nex;
    ListNode* cur=tmp;
    ListNode* pre=NULL;
    while(cur!=NULL){
        nex=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nex;
    }
    tmp=A;
    // while(tmp!=NULL){
    //     cout<<tmp->val<<endl;
    //     tmp=tmp->next;
    // }
    tmpl=len/2;
    while(tmpl--){
        if(pre->val!=tmp->val)
            return 0;
        pre=pre->next;
        tmp=tmp->next;
    }
    return 1;
    
}

