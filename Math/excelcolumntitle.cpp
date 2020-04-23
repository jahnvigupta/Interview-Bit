string Solution::convertToTitle(int A) {
    A--;
    int prod=1,cnt=0,len=0;
    for(int i=0;i<8;i++){
        prod*=26;
        cnt+=prod;
        if(A<=cnt){
            len=i;
            break;
        }
    }
    A-=(cnt-prod);
    string s;
    for(int i=0;i<len+1;i++){
        s+="A";
    }
    while(A!=0){
        int k=0;
        for(int i=1;i<8;i++){
            if(A<pow(26,i)){
                k=i;
                break;
            }
        }
        k=k-1;
        int temp=pow(26,k);
        int que=A/temp;
        int rem=A%temp;
        s[s.length()-1-k]=char(65+que);
        A=rem;
    }
    
    return s;
}

