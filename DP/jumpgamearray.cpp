int Solution::canJump(vector<int> &A) {
    vector<int> reach(A.size(),0);
    reach[0]=1;
    for(int i=0;i<A.size();i++) {
        for(int j=1;j<=A[i];j++) {
            if(j+i<A.size()) {
                reach[j+i]=1;
            }
        }
    }
    for(int i=0;i<A.size();i++){
        if(reach[i]==0) {
            //cout<<i<<endl;
            return 0;
        }
    }
    return 1;
}
