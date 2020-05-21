/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool traversal(TreeNode* A,TreeNode* B){
    if(A==NULL and B!=NULL)
        return false;
    else if(B==NULL and A!=NULL)
        return false;
    else if(A==NULL and B==NULL)
        return true;
    if(A->val!=B->val)
        return false;
    else
        return (traversal(A->left,B->left) and traversal(A->right,B->right));
        
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(traversal(A,B))
        return 1;
    else
        return 0;
}

