int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=0,j=0,k=0;
    int ans=INT_MAX,mi=0;
    while(i<A.size() and j<B.size() and k<C.size()){
        //cout<<ans<<endl;
        //cout<<"i "<<i<<" j "<<j<<" k "<<k<<endl;
        
        ans=min(ans,abs(max(max(A[i],B[j]),C[k])-min(min(A[i],B[j]),C[k])));
        int x=min(min(A[i],B[j]),C[k]);
        if(x==A[i] and i<A.size())
            i++;
        if(x==B[j] and j<B.size())
            j++;
        if(x==C[k] and k<C.size())
            k++;
    }
    return ans;
}

