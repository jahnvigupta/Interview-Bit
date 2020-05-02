/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* ptr=A;
    while(ptr->next!=NULL){
        //cout<<ptr->val<<endl;
        if(ptr->val==ptr->next->val)
            while(ptr->next!=NULL and ptr->val==ptr->next->val){
                ptr->next = ptr->next->next;
            }
            if(ptr->next==NULL)
                return A;
        else {
            ptr=ptr->next;
        }
    }
    return A;
}

