int Solution::findMinXor(vector<int> &A) {
    int mi=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
        int x=A[i]^A[i+1];
        if(x<mi)
            mi=x;
    }
    return mi;
}

