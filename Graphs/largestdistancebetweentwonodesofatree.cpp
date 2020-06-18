int maNode=-1,maDist=-1;
void dfs(int a,vector<vector<int>> &adj,int tmp, vector<bool> &visited){
    visited[a]=true;
    if(tmp>maDist){
        maNode=a;
        maDist=tmp;
    }
    for(auto ad: adj[a]){
        if(!visited[ad])
            dfs(ad,adj,tmp+1,visited);
    }
    return;
}

int Solution::solve(vector<int> &A) {
    vector<vector<int>> adj(A.size());
    maDist=-1,maNode=-1;
    vector<bool> visited(A.size());
    for(int i=0;i<A.size();i++)
        visited[i]=false;
    int root;
    for(int i=0;i<A.size();i++){
        if(A[i]!=-1){
            adj[A[i]].push_back(i);
            adj[i].push_back(A[i]);
        }
        else
            root=i;
    }
    dfs(0,adj,0,visited);
    maDist=-1;
    //cout<<maNode<<endl;
    for(int i=0;i<A.size();i++)
        visited[i]=false;
    dfs(maNode,adj,0,visited);
    return maDist;
    
}

