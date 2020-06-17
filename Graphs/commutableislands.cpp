int Solution::solve(int A, vector<vector<int>>& B) {
    vector<vector<pair<int,int>>> adj(A+1);
    bool visited[A+1];
    for(int i=0;i<A+1;i++)
        visited[i]=false;
    for(auto& b:B){
        adj[b[0]].push_back(make_pair(b[2],b[1]));
        adj[b[1]].push_back(make_pair(b[2],b[0]));
    }
    //cout<<"HI"<<endl;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
    int mincost=0;
    q.push(make_pair(0,1));
    while(!q.empty()){
        auto p=q.top();
        //cout<<"p.second "<<p.second<<endl;
        q.pop();
        if(visited[p.second])
            continue;
        visited[p.second]=true;
        mincost+=p.first;
        for(auto& ad: adj[p.second]){
            if(!visited[ad.second])
                q.push(ad);
        }
    }
    return mincost;
}

