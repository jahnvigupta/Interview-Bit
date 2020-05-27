/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
stack <TreeNode*> s;
BSTIterator::BSTIterator(TreeNode *root) {
    while(!s.empty())
        s.pop();
    TreeNode *c=root;
    while(c)
        s.push(c),c=c->left;
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(s.empty())
        return false;
    return true;
}

/** @return the next smallest number */
int BSTIterator::next() {
    int v=s.top()->val;
    TreeNode *to=s.top()->right;
    s.pop();
    while(to)
        s.push(to),to=to->left;
    return v;
}
