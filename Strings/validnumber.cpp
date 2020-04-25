int Solution::isNumber(const string A) {
    for(int i=0;i<A.length();i++){
        //cout<<A[i]<<endl;
        if(A[i]!='e' and A[i]!='.' and A[i]!='+' and A[i]!='-' and (A[i]<48 or A[i]>57) and A[i]!=' ')
            return 0;
    }
    int k=0;
    while(A[k]==' ')
        k++;
    //cout<<k<<endl;
    string s="";    
    if(A[k]=='+' or A[k]=='-')
        k++;
    for(int i=k;i<A.length();i++){
        if(A[i]==' ')
            break;
        else
            s+=A[i];
    }
    //cout<<s<<endl;
    int cnt1=0,cnt2=0,dec=-1,ex=-1,flg=0,flg2=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            if(flg==0){
                dec=i;
                flg=1;
            }
            cnt1++;
        }
        if(s[i]=='e'){
            if(flg2==0){
                ex=i;
                flg2=1;
            }
            cnt2++;
        }
    }
    if(cnt2>1 or cnt1>1 or (dec>ex and ex!=-1)){
        //cout<<"h1"<<endl;
        return 0;
    }
    for(int i=0;i<s.length();i++){
        if(i==s.length()-1 and s[i]=='.'){
            //cout<<"hi!"<<endl;
            return 0;
        }
        else if(s[i]=='.' and (s[i+1]<48 or s[i+1]>57)){
            //cout<<"hi!"<<endl;
            return 0;
        }       
    }
    for(int i=0;i<s.length();i++){
        if(i==s.length()-1 and s[i]=='e')
            return 0;
        else if(s[i]=='e' and s[i+1]!='+' and s[i+1]!='-' and (s[i+1]<48 or s[i+1]>57)){
            //cout<<"hi"<<endl;
            return 0;
        }
    }
    //cout<<s<<endl;
    if(s.length()==0){
        //cout<<"hi"<<endl;
        return 0;
    }
    return 1;
}

