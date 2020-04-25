int Solution::atoi(const string A) {
    string s="";
    int flg=1;
    for(int i=0;i<A.length();i++){
        if(A[i]=='-'){
            flg=-1;
            continue;
        }
        if(A[i]=='+'){
            continue;
        }   
        if(A[i]==' ' or (A[i]<48 or A[i]>57))
            break;
        else
            s+=A[i];
    }
    if(s.length()==0)
        return 0;
    else {
        long long ans=0;
        for(int i=0;i<s.length();i++){
            ans=ans*10+(s[i]-'0');
        }
        // cout<<ans<<endl;
        // cout<<s<<endl;
        //cout<<flg<<endl;
        if((flg==-1 and ans>INT_MAX) or ans<INT_MIN)
            return INT_MIN;
        //cout<<ans<<endl;
        ans= flg==1 ? ans : -1*ans;
        if(ans>INT_MAX)
            return INT_MAX;
        else if(ans<INT_MIN)
            return INT_MIN;
        else
            return ans;
    }
    
}

