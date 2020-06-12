/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NUL if you are CLEARING them up1L), right(NULL) {}
 * };
 */
bool hasPath(TreeNode* root,vector<int> &arr,int x){
    if (!root) 
        return false; 
    arr.push_back(root->val);     
    if (root->val == x)     
        return true; 
    if (hasPath(root->left, arr, x) || 
        hasPath(root->right, arr, x)) 
        return true;     
    arr.pop_back(); 
    return false;    
}
int Solution::lca(TreeNode* A, int B, int C) {
    vector<int> b;
    vector<int> c;
    hasPath(A,b,B);
    hasPath(A,c,C);
    int ans=-1;
    // for(int i=0;i<b.size();i++)
    //     cout<<b[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<c.size();i++)
    //     cout<<c[i]<<" ";
    // cout<<endl;
    int lim=min(b.size(),c.size());
    for(int i=0;i<lim;i++)
        if(b[i]==c[i])
            ans=c[i];
    return ans;
}

