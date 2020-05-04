/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    int len=0;
    ListNode* ptr1;
    ptr1=A;
    while(ptr1!=NULL){
        len++;
        ptr1=ptr1->next;
    }
    ptr1=A;
    if(len%2==0) {
        int x=(len+1)/2;
        x--;
        while(x--){
            A=A->next;
        }
        A=A->next;
        ListNode* ptr2;
        ptr2=A;
        ListNode* nex;
        ListNode* prev=NULL;
        ListNode* curr=ptr2;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        ptr2=prev;
        x=len/2;
        A=ptr1;
        x--;
        while(x--){
            A=A->next;
        }
        A->next=NULL;
        x=len/2;
        //cout<<x<<endl;
        ListNode* ans=ptr1;
        while(x--){
            ListNode* tmp;
            tmp=ptr1->next;
            ptr1->next=ptr2;
            ptr2=ptr2->next;
            ptr1->next->next=tmp;
            ptr1=ptr1->next->next;
        }
        return ans;
    }
    else {
        int x=(len+1)/2;
        x--;
        while(x--){
            A=A->next;
        }
        A=A->next;
        ListNode* ptr2;
        ptr2=A;
        ListNode* nex;
        ListNode* prev=NULL;
        ListNode* curr=ptr2;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        ptr2=prev;
        x=len/2;
        A=ptr1;
        x=(len/2)+1;
        x--;
        while(x--){
            A=A->next;
        }
        A->next=NULL;
        x=len/2;
        //cout<<x<<endl;
        ListNode* ans=ptr1;
        while(x--){
            ListNode* tmp;
            tmp=ptr1->next;
            ptr1->next=ptr2;
            ptr2=ptr2->next;
            ptr1->next->next=tmp;
            ptr1=ptr1->next->next;
        }
        return ans;
    }
}

