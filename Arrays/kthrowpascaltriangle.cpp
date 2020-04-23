vector<int> Solution::getRow(int A) {
    A++;
    vector<vector<int>> res;
    if(A>=1)
    res.push_back({1});
    if(A>=2)
    res.push_back({1,1});
    if(A>=3){
        for(int i=2;i<A;i++){
            vector<int> B(i+1);
            B[0]=1;
            B[i]=1;
            for(int j=1;j<i;j++){
                B[j]=res[i-1][j-1]+res[i-1][j];
            }
            res.push_back(B);
        }
    }
    return res[A-1];

}
