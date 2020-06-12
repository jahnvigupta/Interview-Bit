/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void traversal(TreeNode* A,vector<vector<int>> &res,vector<int> tmp,int B){
    if(A==NULL)
        return;
    tmp.push_back(A->val);
    B=B-A->val;
    if(B==0 and A->left==NULL and A->right==NULL){
        res.push_back(tmp);
        return;
    }
    if(A->left)
       traversal(A->left,res,tmp,B);
    if(A->right)
       traversal(A->right,res,tmp,B);
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> res;
    vector<int>tmp;
    traversal(A,res,tmp,B);
    return res;
}

