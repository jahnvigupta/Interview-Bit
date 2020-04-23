vector<int> Solution::maxset(vector<int> &A) {
    vector<int> ans,tmp;
    long long ma=0,tmpsu=0,su=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<0){
            if(tmpsu>su){
                ans.clear();
                ans=tmp;
                su=tmpsu;
                
            }
            else if(tmpsu==su and tmp.size()>ans.size()){
                ans.clear();
                ans=tmp;
                su=tmpsu;
            }
            tmp.clear();
            tmpsu=0;
        }
        if(A[i]>=0){
            tmp.push_back(A[i]);
            tmpsu+=A[i];
        }
    }
    if(tmp.size()!=0 and tmpsu>su){
        ans.clear();
        ans=tmp;
    }
    return ans;
}
