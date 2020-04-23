int Solution::trailingZeroes(int A) {
    int t=0,f=0;
    int x=A;
    while(x>=2){
        t+=x/2;
        x=x/2;
    }
    x=A;
    while(x>=5){
        f+=x/5;
        x=x/5;
    }
    return min(t,f);
    
    
}

