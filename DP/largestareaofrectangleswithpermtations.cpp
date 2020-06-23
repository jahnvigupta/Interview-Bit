int Solution::solve(vector<vector<int> > &A) {
    int n=A.size(),m=A[0].size();
    for(int j=0;j<m;j++){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(A[i][j]==1)
                cnt++;
            if(A[i][j]==0)
                cnt=0;
            A[i][j]=cnt;
        }
    }
    for(int i=0;i<n;i++){
        sort(A[i].rbegin(),A[i].rend());
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cout<<A[i][j]<<" ";
            ans=max(ans,A[i][j]*(j+1));
        }    
        //cout<<endl;
    }
    return ans;
}

