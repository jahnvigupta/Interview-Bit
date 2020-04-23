int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> V;
    for(int i=0;i<A.size();i++)
        V.push_back({A[i],i});
    sort(V.begin(),V.end());
    vector<int> ind(A.size());
    ind[A.size()-1]=V[A.size()-1].second;
    for(int i=A.size()-2;i>-1;i--)
        ind[i]=max(ind[i+1],V[i].second);
    int ans=0;
    for(int i=0;i<A.size();i++){
        ans=max(ans,ind[i]-V[i].second);
    }
    return ans;
}

