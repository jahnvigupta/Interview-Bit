void dfs(vector<vector<char>> &A,int m,int n,int x,int y){
    A[m][n]='#';
    if(m-1>-1 and A[m-1][n]=='O')
        dfs(A,m-1,n,x,y);
    if(n-1>-1 and A[m][n-1]=='O')
        dfs(A,m,n-1,x,y);
    if(m+1<x and A[m+1][n]=='O')
        dfs(A,m+1,n,x,y);
    if(n+1<y and A[m][n+1]=='O')
        dfs(A,m,n+1,x,y);
    return;
}


void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=A.size(),n=A[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((i==0 or j==0 or i==m-1 or j==n-1) and A[i][j]=='O')
                dfs(A,i,j,m,n);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]=='#')
                A[i][j]='O';
            else if(A[i][j]=='O')
                A[i][j]='X';
                
        }
    }
}

