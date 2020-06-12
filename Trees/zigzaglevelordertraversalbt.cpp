/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
   bool ltor=true;
   stack<struct TreeNode*> curr;
   stack<struct TreeNode*> nex;
   curr.push(A);
   vector<vector<int>> res;
   while(!curr.empty()){
       vector<int> temp;
       while(!curr.empty()){
           TreeNode* x=curr.top();
           curr.pop();
           temp.push_back(x->val);
           if(ltor){
               if(x->left)
                nex.push(x->left);
               if(x->right)
                nex.push(x->right);
           }
           if(!ltor){
               if(x->right)
                nex.push(x->right);
               if(x->left)
                nex.push(x->left);
           }
       }
       res.push_back(temp);
       ltor=!ltor;
       swap(curr,nex);
   }
   return res;
}

