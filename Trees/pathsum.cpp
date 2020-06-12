/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool traversal(TreeNode *A,int B){
    if(A==NULL){
        return 0;
    }
    if(A->val==B and A->left==NULL and A->right==NULL)
        return 1;
    return traversal(A->right,B-A->val) or traversal(A->left,B-A->val);
}
int Solution::hasPathSum(TreeNode* A, int B) {
    if(traversal(A,B))
        return 1;
    else
        return 0;
}

