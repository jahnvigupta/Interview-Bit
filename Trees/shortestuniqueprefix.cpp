struct trie{
    int cnt;
    trie *child[26];
};
trie* getNode(){
    trie* node = new trie();
    node->cnt=0;
    for(int i=0;i<26;i++){
        node->child[i]=NULL;
    }
    return node;
}
void insert(trie *A,string s){
    trie *curr=A;
    for(int i=0;i<s.length();i++){
        int idx=s[i]-'a';
        if(!curr->child[idx])
            curr->child[idx]=getNode();
        curr=curr->child[idx];
        curr->cnt++;
    }
    curr->cnt=0;
}
string search(trie *A,string s){
    string s1="";
    trie *curr=A;
    for(int i=0;i<s.length();i++){
        int idx=s[i]-'a';
        int cnt=0;
        s1+=s[i];
        //cout<<curr->cnt<<" ";
        curr=curr->child[idx];
        if(curr->cnt==1)
            break;
    }
    //cout<<endl;
    return s1;
}
vector<string> Solution::prefix(vector<string> &A) {
    trie *root = getNode();
    for(int i=0;i<A.size();i++){
        insert(root,A[i]);
    }
    vector<string> ans;
    for(int i=0;i<A.size();i++){
        ans.push_back(search(root,A[i]));
    }
    return ans;
}


