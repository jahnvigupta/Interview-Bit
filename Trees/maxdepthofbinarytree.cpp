/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int depth(TreeNode* A,int d){
    if(A==NULL)
        return d;
    else 
        return max(depth(A->left,d+1),depth(A->right,d+1));
}
int Solution::maxDepth(TreeNode* A) {
    return depth(A,0);
}

