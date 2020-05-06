/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* slow=A;
    ListNode* fast=A;
    bool loop=false;
    slow=slow->next;
    fast=fast->next->next;
    while(slow and fast and fast->next){
        if(slow==fast){
            loop=true;
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
        
    }
    if(loop){
        slow=A;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    return NULL;
}

