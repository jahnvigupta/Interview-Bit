int Solution::solve(vector<int> &A) {
    int flg=0;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        if(upper_bound(A.begin(),A.end(),A[i])!=A.end()){
            int pos=upper_bound(A.begin(),A.end(),A[i])-A.begin();
            if(A.size()-pos==A[i])
                flg=1;
        }
    }
    if(A[A.size()-1]==0)    
        flg=1;
    if(flg==1)
        return 1;
    else 
        return -1;
}

