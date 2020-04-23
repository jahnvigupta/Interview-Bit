int Solution::titleToNumber(string A) {
    int x=A.length()-1;
    int k=1,pos=0;
    for(int i=0;i<x;i++){
        k*=26;
        pos=pos+k;
    }
    for(int i=0;i<A.length();i++){
        pos+=(int(A[i])-65)*pow(26,A.length()-i-1);
    }
    
    return pos+1;
    
}

