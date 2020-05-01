vector<int> Solution::maxone(vector<int> &A, int B) {
    vector<int> res;
    queue<int> tmp;
    int j=0,len=INT_MIN,start=-1,end=-1,z=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==1){
            if(i-j+1>len){
                len=i-j+1;
                end=i;
                start=j;
            }
        }
        else {
            z++;
            tmp.push(i);
            if(z>B){
                z--;
                j=tmp.front()+1;
                tmp.pop();
                
            }
            if(i-j+1>len){
                len=i-j+1;
                end=i;
                start=j;
            }
        }
    }
    //cout<<start<<" "<<end<<" "<<endl;
    for(int i=start;i<=end;i++)
        res.push_back(i);
    return res;
}

