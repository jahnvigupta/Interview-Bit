struct trie{
    bool isleaf;
    trie *child[26];
};
trie* getNode(){
    trie* node = new trie();
    node->isleaf=NULL;
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
    }
    curr->isleaf=true;
}
bool search(trie *A,string s){
    trie *curr=A;
    for(int i=0;i<s.length();i++){
        int idx=s[i]-'a';
        if(!curr->child[idx])
            return 0;
        curr=curr->child[idx];
    }
    return (curr && curr->isleaf);
}a.second

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    if(a.first == b.first) 
        return a.second < b.second;
    
    return a.first > b.first;	
}
vector<int> Solution::solve(string A, vector<string> &B) {
    stringstream ss;
    for(int i=0;i<A.size();i++){
        if(A[i]=='_')
            A[i]=' ';
    }
    vector<pair<int,int>> v;
    vector<int> ans;
    ss<<A;
    string word;
    trie *root = getNode();
    while(ss>>word)
        insert(root,word);
    for(int i=0;i<B.size();i++){
        ss.clear();
        int cnt=0;
        for(int j=0;j<B[i].size();j++){
            if(B[i][j]=='_')
                B[i][j]=' ';
        }
        ss<<B[i];
        while(ss>>word){
            if(search(root,word))  
                cnt++;
        }
        //cout<<cnt<<endl;
        v.push_back({cnt,i});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        //cout<<v[i].first<<endl;
        ans.push_back(v[i].second);
    }
    return ans;
}

