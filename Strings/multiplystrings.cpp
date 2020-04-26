string Solution::multiply(string A, string B) {
    string s1="";
    for(int j=B.size()-1;j>-1;j--){
        string tmp="";
        int x=(B.size()-1-j);
        while(x--)
            tmp+='0';
        int carry=0;
        for(int i=A.size()-1;i>-1;i--){
            int tm=(B[j]-'0')*(A[i]-'0')+carry;
            tmp+=to_string((tm)%10);
            carry=tm/10;
        }
        if(carry>0)
            tmp+=to_string(carry);
        int c1=0;
        reverse(s1.begin(),s1.end());
        for(int i=0;i<s1.length();i++){
            int tm=(s1[i]-'0')+(tmp[i]-'0')+c1;
            s1[i]=char((tm%10) + 48);
            c1=tm/10;
        }
        for(int i=s1.length();i<tmp.length();i++){
            int tm=(tmp[i]-'0')+c1;
            s1+=char((tm%10) + 48);
            c1=tm/10;
        }
        if(c1>0)
            s1+=to_string(c1);
        reverse(s1.begin(),s1.end());
        //cout<<s1<<endl;
    }    
    int i=0;
    while(s1[i]=='0')
        i++;
    string s2;
    for(int j=i;j<s1.length();j++)
        s2+=s1[j];
    if(s2.length()==0)
        s2="0";
    return s2;    
}

