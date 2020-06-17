void dfs(int i,int j, int m,int n, vector<vector<int>> &mat){
    if(mat[i][j]==0)
        return;
    mat[i][j]=0;
    if(i-1>-1 and mat[i-1][j]==1){
        dfs(i-1,j,m,n,mat);
    }
    if(j-1>-1 and mat[i][j-1]==1){
        dfs(i,j-1,m,n,mat);
    }
    if(i+1<m and mat[i+1][j]==1){
        dfs(i+1,j,m,n,mat);
    }
    if(j+1<n and mat[i][j+1]==1){
        dfs(i,j+1,m,n,mat);
    }
    return;
} 
int Solution::black(vector<string> &A) {
    int m=A.size();
    int n=A[0].size();
    vector<vector<int>> mat;
    for(int i=0;i<m;i++){   
        vector<int> tmp;
        for(int j=0;j<n;j++){
            if(A[i][j]=='X')
                tmp.push_back(1);
            else
                tmp.push_back(0);
        }
        mat.push_back(tmp);
    }
    int ans=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                ans++;
                dfs(i,j,m,n,mat);
            }
        }
    }
    return ans;
}
