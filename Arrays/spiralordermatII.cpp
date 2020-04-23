vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> res;
    int mat[A][A]={0};
    int val=1;
    int k=0,l=0,m=A,n=A;
    while(k<m && l<n){
        for(int i=l;i<n;i++)
            mat[k][i]=val++;
        k++;    
        for(int i=k;i<m;i++)
            mat[i][n-1]=val++;
        n--;
        if(k<m){
            for(int i=n-1;i>=l;i--)
                mat[m-1][i]=val++;
            m--;
        }
        if(l<n){
            for(int i=m-1;i>=k;i--)
                mat[i][l]=val++;
            l++;
        }
    }
    for(int i=0;i<A;i++){
        vector<int> tmp;
        for(int j=0;j<A;j++)
            tmp.push_back(mat[i][j]);
        res.push_back(tmp);
    }
    return res;
}
