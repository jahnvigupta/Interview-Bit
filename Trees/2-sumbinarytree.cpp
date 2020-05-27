/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> inorder(TreeNode *A){
    TreeNode *curr=A;
    stack <TreeNode*> s;
    vector <int> res;
    while(curr!=NULL or s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        res.push_back(curr->val);
        curr=curr->right;
    }
    return res;
}
int Solution::t2Sum(TreeNode* A, int B) {
    vector<int> res;
    res = inorder(A);
    int start=0,end=res.size()-1;
    while(start<end){
        if(res[start]+res[end]==B)
            return 1;
        else if(res[start]+res[end]>B)
            end--;
        else if(res[start]+res[end]<B)
            start++;
    }
    return 0;
}

