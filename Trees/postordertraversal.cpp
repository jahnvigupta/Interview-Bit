/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode* > s;
    vector<int> res; 
    TreeNode* curr=A;
    s.push(curr);
    while(!s.empty()){
        curr=s.top();
        s.pop();
        res.push_back(curr->val);
        if(curr->left)
            s.push(curr->left);
        if(curr->right)
            s.push(curr->right);    
    }
    reverse(res.begin(),res.end());
    return res;
}

