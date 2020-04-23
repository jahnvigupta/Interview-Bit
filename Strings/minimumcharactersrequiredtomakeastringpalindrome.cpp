int Solution::solve(string A) {
    int cnt=0;
    for(int i=0;i<A.length();i++){
        string s1=A.substr(0,i+1);
        string s2=s1;
        reverse(s2.begin(),s2.end());
        if(s1==s2)
            cnt=i+1;
        //cout<<cnt<<endl;
    }
    return A.size()-cnt;
}

