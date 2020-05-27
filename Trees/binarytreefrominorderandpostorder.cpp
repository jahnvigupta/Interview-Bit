/**
 * Definition for binary tree
 * struct TreeNode {Asymptotic
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* build(vector<int> &A, vector<int> &B,int start,int end,int *pIndex, unordered_map<int,int> &mp){
    if(start>end)
        return NULL;
    TreeNode* root= new TreeNode(B[*pIndex]);
    int curr=B[*pIndex];
    (*pIndex)--;
    if(start==end)  
        return root;
    int index=mp[curr];
    root->right=build(A,B,index+1,end,pIndex,mp);
    root->left=build(A,B,start,index-1,pIndex,mp);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    unordered_map<int, int> mp; 
    for (int i = 0; i < A.size(); i++) 
        mp[A[i]] = i; 
    int ind = B.size() - 1;
    return build(A,B,0,A.size()-1,&ind,mp);
}

