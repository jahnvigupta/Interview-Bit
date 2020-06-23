int Solution::lis(const vector<int> &A) {
    int ans=0;
    int lis[A.size()];
    for(int i=0;i<A.size();i++)
        lis[i]=1;
    for(int i=1;i<A.size();i++) {
        for(int j=0;j<i;j++) {
            if(A[i]>A[j] and lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    return *max_element(lis, lis+A.size());
}

