/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode* > s;
    vector<int> res; 
    TreeNode* curr=A;
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        //cout<<curr->val<<endl;
        res.push_back(curr->val);
        curr=curr->right;
    }
    return res;
}

