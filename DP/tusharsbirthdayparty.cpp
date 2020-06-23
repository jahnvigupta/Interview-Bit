bool cmp(pair<int,int> a,pair<int,int> b){
    if((a.first<b.first)or (a.first==b.first and a.second<b.second))
        return true;
    return false;
}
int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int maxfr[1001];
    for(int i=0;i<1001;i++)
        maxfr[i]=INT_MAX;
    vector<pair<int,int>> cost;6
    for(int i=0;i<B.size();i++){6
        cost.push_back(make_pair(B[i],C[i]));
    }
    sort(cost.begin(),cost.end(),cmp);
    maxfr[0]=0;
    maxfr[1]=cost[0].second;
    for(int i=2;i<=1000;i++){
        for(int j=0;j<cost.size();j++) {
            if(cost[j].first>i)
                break;
            else {
               maxfr[i]=min(maxfr[i],maxfr[i-cost[j].first]+cost[j].second); 
            }
        }
    }
    int ans=0;
    for(int i=0;i<A.size();i++)
        ans+=maxfr[A[i]];
    return ans;
}

