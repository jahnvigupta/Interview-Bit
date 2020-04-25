bool chk(string s){
    //cout<<s<<endl;
    vector<string> vec;
    string ex="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            vec.push_back(ex);
            ex="";
        }
        else{
            ex+=s[i];
        }

    }
    vec.push_back(ex);
    for(auto st:vec){
        if((st[0]=='0' and st.length()>1) or st.length()<1 or st.length()>3 or stoi(st)<0 or stoi(st)>255){
            return false;
        }
    }
    return true;
}
vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> res;
    string c=A;
    if(A.length()<4 or A.length()>12){
        //cout<<"hi"<<endl;
        return res;
    }
    for(int i=1;i<A.length()-2;i++){
        for(int j=i+1;j<A.length()-1;j++){
            for(int k=j+1;k<A.length();k++){
                c=c.substr(0,k)+'.'+c.substr(k,c.length()-k+2);
                c=c.substr(0,j)+'.'+c.substr(j,c.length()-j+3);
                c=c.substr(0,i)+'.'+c.substr(i,c.length()-i+4);
                if(chk(c))
                    res.push_back(c);
                c=A;
            }
        }    
    }
    return res;
}

