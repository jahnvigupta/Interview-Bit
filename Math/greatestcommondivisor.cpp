int gc(int A,int B){
    if(A==0)
        return B;
    else if(B==0)
        return A;
    else if(A==B)
        return A;
    else if(A>B)
        return gc(A-B,B);
    else
        return gc(A,B-A);
}
int Solution::gcd(int A, int B) {
    return gc(A,B);
}

