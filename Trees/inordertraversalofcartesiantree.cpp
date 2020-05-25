/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* build(vector<int> &A,int start,int end){
    if(start>end)
        return NULL;
    int ind=-1,ma=INT_MIN;
    for(int i=start;i<=end;i++){
        if(A[i]>ma){
            ma=A[i];
            ind=i;
        }
    }
    TreeNode* root=new TreeNode(A[ind]);
    root->left=build(A,start,ind-1);
    root->right=build(A,ind+1,end);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A) {
    return build(A,0,A.size()-1);
}

