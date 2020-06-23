int Solution::chordCnt(int A) {
    long long ans[A+1];
    long long int mod=1000000007;
    for(int i=0;i<A+1;i++)
        ans[i]=0;
    ans[0]=1;
    ans[1]=1;
    for(int i=2;i<A+1;i++) {
        //long long prod=0;
        for(int j=0;j<i;j++){
            ans[i]=(ans[i]+(ans[j]*ans[i-j-1])%mod)%mod;
        }
        //cout<<prod<<endl;
        //ans[i]=prod;
    }
    return ans[A];
}

