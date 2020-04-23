int Solution::solve(int A, vector<int> &B) {
    sort(B.begin(),B.end());
    int n=A;
    long long C[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 or i==j)
                C[i][j]=1;
            else
                C[i][j]=(C[i-1][j-1]+C[i-1][j])%1000000007;
        }
    }
    long long po[n+1]={0};
    po[0]=1;
    po[1]=1;
    for(int i=2;i<n+1;i++)
        po[i]=(po[i-1]*2)%1000000007;
    long long ans=1,tmp=0,cnt=0;
    for(int i=0;i<B.size();i++){
        if(i==0)
            tmp=B[i]-1;
        else {
            tmp=B[i]-B[i-1]-1;
            ans=(ans*po[tmp])%1000000007;
        }
        cnt+=tmp;
        ans=(ans*C[cnt][tmp])%1000000007;
           
    }
    tmp=A-B[B.size()-1];
    cnt+=tmp;
    ans=(ans*C[cnt][tmp])%1000000007;
    return ans%1000000007;
}

