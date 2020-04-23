vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int B[A.size()+1]={0};
    for(int i=0;i<A.size();i++){
        B[A[i]]++;
    }
    int X,Y;
    vector<int> C;
    for(int i=1;i<A.size()+1;i++){
        if(B[i]==2)
            X=i;
        if(B[i]==0)
            Y=i;
    }
    C.push_back(X);
    C.push_back(Y);
    return C;
}

