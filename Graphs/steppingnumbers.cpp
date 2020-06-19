vector<int> Solution::stepnum(int A, int B) {
    unordered_set<int> s;
    queue<string> q;
    vector<int> res;
    for(int i=1;i<10;i++){
        q.push(to_string(i));
        s.insert(i);
    }
    if(A==0)
        res.push_back(0);
    while(1){
        string temps=q.front();
        //cout<<temps<<endl;
        if(stoi(temps)>B)
            break;
        if(stoi(temps)>=A and stoi(temps)<=B)
            res.push_back(stoi(temps));
        q.pop();
        int x=temps[temps.length()-1]-'0';
        string s1="",s2="";
        if(x==9){
            s1=temps+to_string(x-1);
            int n1=stoi(s1);
            if(s.find(n1)==s.end()){
                q.push(s1);
                s.insert(n1);
            }
        }
        else if(x==0){
            s1=temps+to_string(x+1);
            int n1=stoi(s1);
            if(s.find(n1)==s.end()){
                q.push(s1);
                s.insert(n1);
            }
            
        }
        else {
            s1=temps+to_string(x-1);
            s2=temps+to_string(x+1);
            int n1=stoi(s1),n2=stoi(s2);
            //cout<<"n1 "<<n1<<" n2 "<<n2<<endl;
            if(s.find(n1)==s.end()){
                q.push(s1);
                s.insert(n1);
            }
            if(s.find(n2)==s.end()){
                q.push(s2);
                s.insert(n2);
            }
            
            //cout<<"hi"<<endl;
        }
    }
    return res;
}

