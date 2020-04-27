int Solution::cntBits(vector<int> &A) {
    long long n=A.size();
    long long ans=0;
    for(int i=0;i<32;i++){
        long long cnt=0;
        for(int j=0;j<n;j++){
            if(A[j] & (1<<i))
                cnt++;
        }
        ans+=(cnt*(n-cnt)*2)%1000000007;
    }
    ans=ans%1000000007;
    return (int)ans;
}

