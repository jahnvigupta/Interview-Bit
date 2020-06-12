/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    queue<struct TreeLinkNode*> curr;
    queue<struct TreeLinkNode*> nex;
    curr.push(A);
    while(!curr.empty()){
        while(!curr.empty()){
            TreeLinkNode* temp=curr.front();
            curr.pop();
            if(!curr.empty()){
                temp->next=curr.front();
            }
            if(temp->left)
                nex.push(temp->left);
            if(temp->right)
                nex.push(temp->right);
        }
        swap(curr,nex);
    }
    return;
}

