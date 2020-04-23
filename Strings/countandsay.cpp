string Solution::countAndSay(int A) {
    string s[A];
    s[0]="1";
    for(int i=1;i<A;i++){
        string s1="";
        int cnt=1,k=-1;
        char c=s[i-1][0];
        for(int j=1;j<s[i-1].length();j++){
            if(s[i-1][j]==c)
                cnt++;
            else {
                int k=j;
                s1+=to_string(cnt);
                s1+=c;
                c=s[i-1][j];
                cnt=1;
            }
        }
        if(k!=s[i-1].length()-1){
            //cout<<cnt<<" "<<c<<endl;
            s1+=to_string(cnt);
            //cout<<s1<<endl;
            s1+=c;
            //cout<<s1<<endl;
        }
        //cout<<s1<<endl;
        s[i]=s1;
    }
    return s[A-1];
}

