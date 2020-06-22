int Solution::maxProfit(const vector<int> &A) {
    if(A.size()<2)
        return 0;
    int maxD=A[1]-A[0],mine=A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]-mine>maxD)
            maxD=A[i]-mine;
        if(A[i]<mine)
            mine=A[i];
    }
    return maxD>0? maxD: 0;
}
