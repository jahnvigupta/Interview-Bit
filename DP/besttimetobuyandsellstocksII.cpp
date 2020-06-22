int Solution::maxProfit(const vector<int> &A) {
    int ans=0,mi=INT_MAX;
    for(int i=0;i<A.size();i++){
        if(A[i]<mi)
            mi=A[i];
        if(A[i]>mi){
            ans+=A[i]-mi;
            mi=A[i];
        }
    }
    return ans;
}

