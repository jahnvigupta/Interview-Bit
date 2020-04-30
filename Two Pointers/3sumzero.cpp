vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> res;
    set<vector<int>> res1;
    if(A.size()<3)
        return res;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++){
        int p1=i+1,p2=A.size()-1;
        while(p1<p2){
            long long tmp=(long long)A[i]+(long long)A[p1]+(long long)A[p2];
            if(tmp==0){
                res1.insert({A[i],A[p1],A[p2]});
                //cout<<A[i]<<" "<<A[p1]<<" "<<A[p2]<<" "<<endl;
                p1++;
                p2--;
            }
            if(tmp<0)
                p1++;
            if(tmp>0)
                p2--;
        }
    }
    for(auto itr=res1.begin();itr!=res1.end();++itr){
        res.push_back(*itr);
    }
    return res;
}

