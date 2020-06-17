void bfs(vector<vector<int>> &mat,int x,int y,int A,int B){
    if(mat[x][y]!=-1)
        mat[x][y]=2;
    //cout<<"x "<<x<<"y "<<y<<endl;
    if(x-1>-1 and y-1>-1 and mat[x-1][y-1]==0)
        bfs(mat,x-1,y-1,A,B);
    if(x-1>-1 and mat[x-1][y]==0)
        bfs(mat,x-1,y,A,B);
    if(x-1>-1 and y+1<=B and mat[x-1][y+1]==0)
        bfs(mat,x-1,y+1,A,B);
    if(y-1>-1 and mat[x][y-1]==0)
        bfs(mat,x,y-1,A,B);
    if(y+1<=B and mat[x][y+1]==0)
        bfs(mat,x,y+1,A,B);
    if(x+1<=A and y-1>-1 and mat[x+1][y-1]==0)
        bfs(mat,x+1,y-1,A,B);
    if(x+1<=A and mat[x+1][y]==0)
        bfs(mat,x+1,y,A,B);
    if(x+1<=A and y+1<=B and mat[x+1][y+1]==0)
        bfs(mat,x+1,y+1,A,B);
    return;
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    vector<vector<int>> mat;
    for(int i=0;i<101;i++){
        vector<int> tmp;
        for(int j=0;j<101;j++)
            tmp.push_back(0);
        mat.push_back(tmp);
    }
    for(int i=0;i<C;i++){
        for(int j=E[i]-D;j<E[i]+D+1;j++){
            for(int k=F[i]-D;k<F[i]+D+1;k++){
                double dist=sqrt(pow((E[i]-j),2)+pow((F[i]-k),2));
                if(j>-1 and k>-1 and j<101 and k<101 and abs(dist)<=D){
                    mat[j][k]=-1;
                }
            }
        }
    }
    //cout<<mat[A][B]<<endl;
    bfs(mat,0,0,A,B);
    if(mat[A][B]==2)
        return "YES";
    return "NO";
}

