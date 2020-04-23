int lb(vector<int> A,int k){
    int res=0;
    for(int i=0;i<A.size();i++)
        if(A[i]<=k)
            res++;
    
    return res;
}

int Solution::solve(vector<int> &A, int B, int C) {
    vector<int> N;
    int CC=C;
    while(C!=0){
        N.push_back(C%10);
        C=C/10;
    }
    if(A.size()==0)
        return 0;
    else if(B==1)
        return lb(A,CC-1);
    else if(N.size()>B){
        return A[0]==0 ? pow(A.size(),B-1)*(A.size()-1):pow(A.size(),B);
    }
    else if(B>N.size())
        return 0;
    else {
        int ans=0;
        for(int i=N.size()-1;i>-1;i--){
            if(i==N.size()-1){
                vector<int> temp;
                for(int j=0;j<A.size();j++){
                    if(A[j]>0 and A[j]<=N[i])
                        temp.push_back(A[j]);
                }
                if(temp.size()==0)
                    return 0;
                if(temp[temp.size()-1]!=N[i]){
                    ans+=temp.size()*pow(A.size(),i);
                    break;
                }
                else{
                    //cout<<temp.size()-1<<endl;
                    ans+=(temp.size()-1)*pow(A.size(),i);
                }
                
            }
            else {
                vector<int> temp;
                for(int j=0;j<A.size();j++){
                    if(A[j]<=N[i])
                        temp.push_back(A[j]);
                }
                if(temp.size()==0)
                    return ans;
                if(temp[temp.size()-1]!=N[i]){
                    ans+=temp.size()*pow(A.size(),i);
                    break;
                }
                else
                    ans+=(temp.size()-1)*pow(A.size(),i);
            }
            //cout<<ans<<endl;
        }
        return ans;
    }
}

