vector<int> Solution::solve(int A, int B, int C, int D) {
    int x=0,y=0,z=0;
    vector<int> res;
    res.push_back(1);
    int i=0;
    set <int> s;
    while(i<D){
        int mi=min(A*res[x],min(B*res[y],C*res[z]));
        if(s.find(mi)==s.end()){
            s.insert(mi);
            i++;
            res.push_back(mi);
        }
        if(mi==A*res[x]){
            x++;
        }
        else if(mi==B*res[y]){
            y++;
        }
        else if(mi==C*res[z]){
            z++;
        }
    }
    vector<int> v2(res.begin() + 1, res.end());
    return v2;
}

