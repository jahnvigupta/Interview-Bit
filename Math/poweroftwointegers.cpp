int Solution::isPower(int A) {
    if(A==1)
        return 1;
    for(int i=2;i<=sqrt(A);i++){
        int r1=log(A)/log(i);
        double r2=log(A)/log(i);
        if(r2-r1<0.00000001){
            return 1;
        }
    }
    
    return 0;
}

