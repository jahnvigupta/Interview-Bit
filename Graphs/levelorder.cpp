/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> res;
    queue<TreeNode*> q;
    queue<TreeNode*> nex;
    q.push(A);
    while(!q.empty()){
        vector<int> tmp;
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            tmp.push_back(temp->val);
            if(temp->left)
                nex.push(temp->left);
            if(temp->right)
                nex.push(temp->right);
        }
        swap(q,nex);
        res.push_back(tmp);
    }
    return res;
}

