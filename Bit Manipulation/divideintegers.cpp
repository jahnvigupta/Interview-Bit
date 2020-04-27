int Solution::divide(int A, int B) {
    if(A==INT_MIN and B==-1)
        return INT_MAX;
    if(A==INT_MAX and B==1)
        return INT_MAX;
    if(A==INT_MAX and B==-1)
        return INT_MIN;
    if(A==INT_MIN and B==1)
        return INT_MIN;
    int si=0;
    if((A>0 and B<0) or (A<0 and B>0))
        si=1;
    //cout<<si<<endl;
    long long a=A,b=B;
    if(a<0)
        a*=-1;
    if(b<0)
        b*=-1;    
    long long ans=0;
    // cout<<"a "<<a<<endl;
    // cout<<"b "<<b<<endl;
    while(a>=b){
        int m=0;
        long long z=b;
        while(z<=a){
            m++;
            z<<=1;
        }
        ans+=1<<(m-1);
        a-=(z>>1);
        //cout<<ans<<endl;
    }
    return si==1 ? -1*ans : ans;
}


