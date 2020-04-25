string Solution::addBinary(string A, string B) {
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    if(A.length()>B.length())
        for(int i=B.length();i<A.length();i++)
            B+='0';
    else if(A.length()<B.length())
        for(int i=A.length();i<B.length();i++)
            A+='0';
    int c=0;
    string s="";
    for(int i=0;i<A.length();i++){
        if(A[i]=='0' and B[i]=='0' and c==0)
            s+='0';
        else if(A[i]=='0' and B[i]=='1' and c==0)
            s+='1';
        else if(A[i]=='1' and B[i]=='0' and c==0)
            s+='1';
        else if(A[i]=='0' and B[i]=='0' and c==1){
            s+='1';
            c=0;
        }
        else if(A[i]=='1' and B[i]=='1' and c==0){
            s+='0';
            c=1;
        }
        else if(A[i]=='1' and B[i]=='1' and c==1){
            s+='1';
            c=1;
        }
        else if(A[i]=='1' and B[i]=='0' and c==1){
            s+='0';
            c=1;
        }
        else if(A[i]=='0' and B[i]=='1' and c==1){
            s+='0';
            c=1;
        }
    }
    if(c==1)
        s+='1';
    reverse(s.begin(),s.end());
    return s;
}

