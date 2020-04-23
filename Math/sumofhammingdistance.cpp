int Solution::hammingDistance(const vector<int> &A) {
    long long ans=0;
    long long n=A.size();
    for(long long i=0;i<32;i++){
        int cnt=0;
        for(long long j=0;j<A.size();j++){
            if(A[j] & 1<<i)
                cnt=cnt+1;
        }
        ans+=(cnt*((n-cnt)*2))%1000000007;
    }
    ans=ans%1000000007;
    return (int)ans;
}
