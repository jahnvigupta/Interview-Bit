/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode* ptr1=A;
    int len=0;
    while(ptr1!=NULL){
        len++;
        ptr1=ptr1->next;
    }
    if(len==1)
        return A;
    if(B==1){
        //cout<<"hi!"<<endl;
        int b=B;
        ListNode* ptr2=A;
        int x=C-B;
        //cout<<x<<endl;
        while(x--){
            A=A->next;
        }
        ListNode* ptr3=A->next;
        A->next=NULL;
        ListNode* curr=ptr2;
        ListNode* nex;
        ListNode* prev=NULL;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        ptr2=prev;
        ListNode* ans;
        ans=ptr2;
        while(ptr2->next!=NULL){
            ptr2=ptr2->next;
        }
        ptr2->next=ptr3;
        return ans;
    }
    int b=B;
    b--;
    ptr1=A;
    while(b--){
        A=A->next;
    }
    ListNode* ptr2=A;
    int x=C-B;
    //cout<<x<<endl;
    while(x--){
        A=A->next;
    }
    ListNode* ptr3=A->next;
    A->next=NULL;
    ListNode* curr=ptr2;
    ListNode* nex;
    ListNode* prev=NULL;
    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    ptr2=prev;
    ListNode* ans;
    ans=ptr1;
    b=B;
    b-=2;
    while(b--){
        ptr1=ptr1->next;
    }
    ptr1->next=ptr2;
    while(ptr1->next!=NULL){
        ptr1=ptr1->next;
    }
    ptr1->next=ptr3;
    return ans;
}
