string Solution::convert(string A, int B) {
    if(B==1)
        return A;
    int c[A.length()]={0},flg=0,cnt=0;
    B--;
    for(int i=0;i<A.length();i++){
        if(flg==0 and cnt<=B){
            c[i]=cnt;
            cnt++;
            if(cnt>B){
                flg=1;
                cnt=B-1;
            }
        }
        else if(flg==1 and cnt<=B){
            c[i]=cnt;
            cnt--;
            if(cnt<0){
                flg=0;
                cnt=1;
            }
        }
    }
    // for(int i=0;i<A.length();i++)
    //     cout<<c[i]<<" ";
    // cout<<endl;
    string s="";
    for(int i=0;i<B+1;i++){
        for(int j=0;j<A.length();j++){
            if(c[j]==i)
                s+=A[j];
        }
    }
    return s;
}

