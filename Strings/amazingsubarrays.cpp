int Solution::solve(string A) {
    long long ans=0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='A' or A[i]=='E' or A[i]=='I' or A[i]=='O' or A[i]=='U')
            ans=(ans+(A.length()-i)%10003)%10003;
        if(A[i]=='a' or A[i]=='e' or A[i]=='i' or A[i]=='o' or A[i]=='u')
            ans=(ans+(A.length()-i)%10003)%10003;
        //cout<<ans<<endl;
    }
    return ans%10003;
}

