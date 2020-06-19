int Solution::fibsum(int A) {
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);
    int a=1,b=2,c=3;
    while(a<=A){
        c=a+b;
        a=b;
        b=c;
        fib.push_back(c);
    }
    int ans=0;
    while(A!=0){
        int x=lower_bound(fib.begin(),fib.end(),A)-fib.begin();
        if(fib[x]==A){
            ans++;
            break;
        }
        else {
            x--;
            A=A-fib[x];
            ans++;
        }
    }
    return ans;
}

