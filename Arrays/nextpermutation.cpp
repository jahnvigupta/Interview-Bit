vector<int> Solution::nextPermutation(vector<int> &A) {
    if(A.size()<2)
        return A;
    else {
        int flg=0,k=0;
        for(int i=A.size()-1;i>0;i--){
            if(A[i]>A[i-1]){
                k=i;
                flg=1;
                break;
            }
        }
        if(flg==0){
            sort(A.begin(),A.end());
            return A;
        }
        else {
            sort(A.begin()+k,A.end());
       		swap(A[k-1],A[lower_bound(A.begin()+k,A.end(),A[k-1])-A.begin()]);
            return A;
        }
    }
}
