int Solution::sqrt(int A) {
    long long mi=1,ma=A;
    long long mid=(1+A)/2;
    while(mi<ma){
        mid=(mi+ma)/2;
        if(mid*mid<A)
            mi=mid+1;
        else
            ma=mid;
        
    }
    if(mi*mi==A)
        return mi;
    else
        return mi-1;
}

