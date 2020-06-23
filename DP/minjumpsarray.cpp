int Solution::jump(vector<int> &A) {
    if(A.size()==1 and A[0]==0)
        return 0;
    if(A[0]==0)
        return -1;
    int curr=A[0];
    int max_reach=-1,jump=1;
    for(int i=1;i<A.size();i++) {
        max_reach=max(max_reach,A[i]+i);
        if(curr==i and i!=A.size()-1) {
            curr=max_reach;
            jump++;
            max_reach=-1;
        }
        if(curr==i and i!=A.size()-1)
            return -1;
    }
    return jump;
}

