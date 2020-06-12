/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void su(TreeNode* A,long long &sum,int tmp){
    if(A==NULL)
        return;
    tmp=((10*tmp)%1003+A->val)%1003;
    if(A->left==NULL and A->right==NULL){
        //cout<<"tmp "<<tmp<<endl;
        sum=(sum+tmp%1003);
        return;
    }
    su(A->left,sum,tmp);
    su(A->right,sum,tmp);
}
int Solution::sumNumbers(TreeNode* A) {
    long long sum=0;
    su(A,sum,0);
    return sum%1003;
}

