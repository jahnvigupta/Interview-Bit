int gcd(int x,int y){
    if(x==0)
        return y;
    else if(y==0)
        return x;
    else if(x==y)
        return x;
    else if(x>y)
        return gcd(x-y,y);
    else
        return gcd(x,y-x);
}
int ans(int x,int y){
    while(gcd(x,y)!=1){
        x=x/gcd(x,y);
    }
    return x;
}

int Solution::cpFact(int A, int B) {
    return ans(A,B);
}

