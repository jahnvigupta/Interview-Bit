bool isCyclic(int a,vector<bool> &visited,vector<bool> &currvisit, vector<vector<int>> &adj){
    if(currvisit[a])
        return true;
    currvisit[a] = true;
    for(auto ad: adj[a]){
        if(isCyclic(ad,visited,currvisit,adj))
            return true;
    }
    currvisit[a] = false;
    return false;
}

int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    vector<vector<int>> adj(A+1);
    for(int i=0;i<B.size();i++)
        adj[B[i]].push_back(C[i]);
    vector<bool> visited(A+1);
    vector<bool> currvisit(A+1);
    for(int i=0;i<A+1;i++){
        visited[i]=false;
        currvisit[i]=false;
    }
    for(int i=1;i<A+1;i++){
        if(visited[i]==false)
            if(isCyclic(i,visited,currvisit,adj))
                return 0;
    } 
    return 1;
}

