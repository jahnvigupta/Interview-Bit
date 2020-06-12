/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void depth(TreeNode*A, int dep,vector<int> &mi){
    if(A==NULL)
        return;
    if(A->left==NULL and A->right==NULL){
        mi.push_back(dep);
        return;
    }
    depth(A->left,dep+1,mi);
    depth(A->right,dep+1,mi);
}

int Solution::minDepth(TreeNode* A) {
    if(!A)
        return 0;
    vector<int> res;
    depth(A,1,res);
    sort(res.begin(),res.end());
    return res[0];
}

