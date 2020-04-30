int Solution::diffPossible(vector<int> &A, int B) {
    for(int i=0;i<A.size()-1;i++){
        if(binary_search(A.begin()+i+1,A.end(),A[i]+B))
            return 1;
    }
    return 0;
}

