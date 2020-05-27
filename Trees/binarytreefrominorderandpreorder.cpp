/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* build(vector<int> &A, vector<int> &B,int start,int end,int *pIndex, unordered_map<int,int> &mp){
    if(start>end)
        return NULL;
    TreeNode* root= new TreeNode(A[*pIndex]);
    int curr=A[*pIndex];
    (*pIndex)++;
    if(start==end)  
        return root;
    int index=mp[curr];
    root->left=build(A,B,start,index-1,pIndex,mp);
    root->right=build(A,B,index+1,end,pIndex,mp);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    unordered_map<int, int> mp; 
    for (int i = 0; i < B.size(); i++) 
        mp[B[i]] = i; 
    int ind = 0;
    return build(A,B,0,A.size()-1,&ind,mp);
}

