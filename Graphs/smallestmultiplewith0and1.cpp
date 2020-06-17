int rem(string s,int N){
    int r=0;
    for(int i=0;i<s.length();i++){
        r=r*10 + (s[i]-'0');
        r=r%N;
    }
    return r;
}
string Solution::multiple(int A) {
    queue<string> q;
    unordered_map<int,int> se;
    string s="1";
    q.push(s);
    while(!q.empty()){
        s=q.front();
        q.pop();
        int r=rem(s,A);
        //cout<<"R "<<r<<endl;
        if(r==0)
            return s;
        else if(se.find(r)==se.end()){
            q.push(s+'0');
            q.push(s+'1');
            se[r]=1;
        }
    }
    return "";
}
