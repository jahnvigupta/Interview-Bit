/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void invert(TreeNode * root){
    if(root==NULL)  
        return;
    TreeNode* tmp=root->left;
    root->left=root->right;
    root->right=tmp;
    invert(root->right);
    invert(root->left);
}
TreeNode* Solution::invertTree(TreeNode* A) {
    invert(A);
    return A;
}

