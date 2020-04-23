int Solution::firstMissingPositive(vector<int> &A) {
    bool present[A.size()+1]={0};
    for(int i=0;i<A.size();i++){
        if(A[i]>0 and A[i]<=A.size()){
            present[A[i]]=1;
        }
    }
    
    for(int i=1;i<=A.size();i++)
        if(!present[i])
            return i;
    return A.size()+1;
}

