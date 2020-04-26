int Solution::power(string A) {
    string s="1";
    if(A=="1" or A=="0")
        return 0;
    while(s.length()<=A.length()){
        if(s==A)
            return 1;
        int c=0;
        string s1="";
        for(int i=s.length()-1;i>-1;i--){
            int tmp=0;
            tmp=(s[i]-48)*2+c;
            s[i] = char((tmp%10) + 48);
            c = tmp/10;
            
        }
        if(c==1)
            s.insert(0,to_string(c));
        //cout<<s<<endl;
        
    }
    return 0;
}

