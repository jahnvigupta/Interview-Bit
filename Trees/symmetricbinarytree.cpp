/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool symmetric(TreeNode* A,TreeNode* B){
    if(A==NULL and B!=NULL)
        return false;
    else if(A!=NULL and B==NULL)
        return false;
    else if(A==NULL and B==NULL)
        return true;
    if(A->val!=B->val)
        return false;
    else 
        return (symmetric(A->left,B->right) and symmetric(A->right,B->left)); 
    
}
int Solution::isSymmetric(TreeNode* A) {
    if(symmetric(A,A))
        return 1;
    else
        return 0;
}

