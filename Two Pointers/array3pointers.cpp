int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0,ans=INT_MAX;
    while(i<A.size() and j<B.size() and k<C.size()){
        int tmp=max(max(abs(A[i]-B[j]),abs(A[i]-C[k])),abs(B[j]-C[k]));
        if(tmp<ans)
            ans=tmp;
        if(tmp==abs(A[i]-B[j]))
            A[i]<B[j] ? i++ : j++;
        if(tmp==abs(B[j]-C[k]))
            B[j]<C[k] ? j++ : k++;
        if(tmp==abs(A[i]-C[k]))
            A[i]<C[k] ? i++ : k++;
    }
    return ans;
}

