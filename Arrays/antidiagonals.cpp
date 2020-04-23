vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> res;
    int flg=0;
    if(flg==0){
        for(int j=0;j<A.size();j++){
            vector<int> tmp;
            int x=0,y=j;
            while(x<A.size() and y>-1){
                tmp.push_back(A[x][y]);
                y--;
                x++;
            }
            res.push_back(tmp);
        }
        flg=1;
    }
    if(flg==1){
        for(int j=1;j<A.size();j++){
            vector<int> tmp;
            int x=j,y=A.size()-1;
            while(x<A.size() and y>-1){
                tmp.push_back(A[x][y]);
                y--;
                x++;
            }
            res.push_back(tmp);
        }
        
    }
    return res;
}

