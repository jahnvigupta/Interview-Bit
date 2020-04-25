int Solution::compareVersion(string A, string B) {
    unsigned long long n1=0,n2=0;
    int i=0,j=0;
    while(i<A.length() or j<B.length()) {
        while(i<A.length() && A[i]!='.'){
            n1=n1*10+(A[i]-'0');
            i++;
        }
        while(j<B.length() && B[j]!='.'){
            n2=n2*10+(B[j]-'0');
            j++;
        }
        if(n1>n2)
            return 1;
        if(n1<n2)
            return -1;
        n1=0;
        n2=0;
        i++;
        j++;
    }
    //cout<<'0'-'0'<<endl;
    return 0;
}

