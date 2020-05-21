/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* node){
    if(node==NULL)
        return 0;
    else
        return 1+max(height(node->left),height(node->right));
}
int Solution::isBalanced(TreeNode* A) {
    if(A==NULL)
        return 1;
    int lh=height(A->left),rh=height(A->right);
    if(abs(lh-rh)<=1 and isBalanced(A->left) and isBalanced(A->right))
        return 1;
    else
        return 0;
}

