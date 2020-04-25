string Solution::solve(string A) {
    vector<string> v;
    int i=0;
    while(A[i]==' ' and i<A.length());{
        //cout<<i<<endl;
        i++;
    }
    string s;
    for(i=0;i<A.length();i++){
        if(A[i]==' '){
            v.push_back(s);
            while(A[i]==' ')
                i++;
            i--;
            s="";
        }
        else {
            s+=A[i];
        }
    }
    v.push_back(s);
    string res="";
    for(int j=v.size()-1;j>0;j--){
        res+=v[j]+' ';
    }
    res+=v[0];
    return res;
}

